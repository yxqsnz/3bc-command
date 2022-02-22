#include <github.h>
#include <log.h>
#include <stdlib.h>
#include <string.h>
#include <utils.h>
#include <json-c/json.h>
#include <assert.h>
static char *github_api_repository_url(github_repository_t *repository)
{
  char *url = malloc(60);
  snprintf(url, 55, "https://api.github.com/repos/%s/%s",
           repository->owner, repository->name);
  return url;
}
github_api_respository_endspoints_t
github_api_endpoints_from_repository(github_repository_t *repository)
{
  char *base = github_api_repository_url(repository);
  char *releases = malloc(strlen(base) + strlen("/releases") + 1);
  sprintf(releases, "%s/releases", base);
  github_api_respository_endspoints_t endpoints = {
      .releases = releases,
      .base = base,
  };
  return endpoints;
}
static inline char *github_tmp_file(github_repository_t *repository,
                                    const char *suffix)
{
  char *tmp_dir = fs_tmp_dir();
  char *tmp_file = malloc(strlen(tmp_dir) + strlen(repository->owner) +
                          strlen(repository->name) + strlen(suffix) + 4);
  sprintf(tmp_file, "%s/%s.%s%s", tmp_dir, repository->owner, repository->name,
          suffix);
  return tmp_file;
}

void github_repository_update(github_repository_t *repository, const char *release_path, int remove_cache, int use_cached_file)
{
  github_api_respository_endspoints_t endpoints =
      github_api_endpoints_from_repository(repository);
  if (release_path == NULL)
  {
    release_path = github_tmp_file(repository, ".releases");
  }
  if (use_cached_file && fs_exists(release_path) == 0 || !use_cached_file)
  {
    log_debug("Cache file not found. Downloading now.");
    set_curlpb_message("info: updating github cache\n");
    CURLcode res = ecurl_download(endpoints.releases, release_path);
    log_debug("Request to github done. Result: %d", res);
    if (res != CURLE_OK)
    {
      fprintf(stderr, "error: failed to download releases from %s!\n",
              endpoints.releases);
      perror("curl");
      return;
    }
  }
  log_debug("Parsing releases from %s", release_path);
  struct json_object *releases = json_object_from_file(release_path);

  if (releases == NULL)
  {
    fprintf(stderr, "error: failed to parse releases from %s!\n",
            release_path);
    fprintf(stderr, "error: %s\n", json_util_get_last_err());
    return;
  }
  struct array_list *releases_list = json_object_get_array(releases);
  struct json_object *tag_name;
  struct json_object *tarball_url;
  struct json_object *release;
  repository->releases = calloc(sizeof(github_release_t), releases_list->length);
  for (int i = 0; releases_list->length > i; i++)
  {
    release = json_object_array_get_idx(releases, i);
    assert(release != NULL);
    tag_name = json_object_object_get(release, "tag_name");
    tarball_url = json_object_object_get(release, "tarball_url");
    assert(tag_name != NULL);
    assert(tarball_url != NULL);
    github_release_t *release_parsed = malloc(sizeof(github_release_t *));
    release_parsed->tag_name = tag_name;
    release_parsed->tarball_url = tarball_url;
    repository->releases[i] = release_parsed;
    log_debug("Release %d: %s %s", i, release_parsed->tag_name,
              release_parsed->tarball_url);
  }
  if (remove_cache)
  {
    remove(release_path);
  }
}

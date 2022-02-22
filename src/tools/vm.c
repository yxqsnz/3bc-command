#include <assert.h>
#include <string.h>
#include <tools.h>
#include <utils.h>

void vm_add(const char *me, char *version, github_repository_t repository)
{
  if (repository.releases == NULL)
  {
    printf("%s: No releases found. Please update cache using `%s -u'.\n", me, me);
  }
  github_release_t *release;
  printf("=> %x\n", repository.releases);
  for (int i = 0; (release = repository.releases[i]) != NULL; ++i)
  {
    if (strcmp(release->tag_name, version) == 0)
    {
      printf("=> Found!\n");
      printf("=> Downloading %s...\n", release->tarball_url);
      break;
    }
  }
}

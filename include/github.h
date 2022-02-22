#ifndef __GITHUB_H__
typedef struct github_release_s {
    const char* tarball_url;
    const char* tag_name;
} github_release_t;
typedef struct github_respository_s {
    const char* owner;
    const char* name;
    github_release_t **releases;
} github_repository_t;
typedef struct github_api_respository_endpoints_s {
    char* releases;
    char* base;
} github_api_respository_endspoints_t;
github_api_respository_endspoints_t github_api_endpoints_from_repository(github_repository_t* repository);
void github_repository_free(github_repository_t* repository);
void github_release_free(github_release_t* release);
void github_repository_update(github_repository_t *repository, const char *release_path, int remove_cache, int use_cached_file);
#define __GITHUB_H__
#endif 
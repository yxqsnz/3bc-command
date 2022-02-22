#include <tools.h>
#include <utils.h>
#include <github.h>
#include <stdbool.h>
void update(github_repository_t* repo) {
    const char* releases_cache_file = cli_3bc_cache_file("releases.json");
    github_repository_update(repo, releases_cache_file, false, false);
}
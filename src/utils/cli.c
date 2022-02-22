#include <utils.h>
#include <string.h>
#include <stdlib.h>
// TODO: Add a option to user select where versions will be stored.
char* cli_3bc_root(void)
{
    char *root = malloc(strlen(fs_home_dir()) + strlen("/.3bc") + 1);
    sprintf(root, "%s/.3bc", fs_home_dir());
    return root;
}
char* cli_3bc_config(void)
{
    char *config = malloc(strlen(cli_3bc_root()) + strlen("/config.json") + 1);
    sprintf(config, "%s/config.json", cli_3bc_root());
    return config;
}
char* cli_3bc_cache(void)
{
    char *cache = malloc(strlen(cli_3bc_root()) + strlen("/cache") + 1);
    sprintf(cache, "%s/cache", cli_3bc_root());
    return cache;
}
char* cli_3bc_cache_file(const char *filename)
{
    char *cache_file = malloc(strlen(cli_3bc_cache()) + strlen(filename) + 1);
    sprintf(cache_file, "%s/%s", cli_3bc_cache(), filename);
    return cache_file;
}
char* cli_make_dirs_if_not_exist(void) {
    char *root = cli_3bc_root();
    char *cache = cli_3bc_cache();
    char *config = cli_3bc_config();
    char *dirs[] = {root, cache, config};
    for (int i = 0; i < 3; i++)
    {
        if (!fs_exists(dirs[i]))
        {
            fs_mkdir(dirs[i]);
        }
    }
    return root;
}
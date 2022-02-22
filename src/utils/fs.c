#include <utils.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <log.h>
#if defined(_WIN32)
char *fs_tmp_dir(void)
{
    char *DIR = getenv("TEMP");
    if (DIR == NULL)
    {
        DIR == "C:\\Windows\\Temp"
    }
    return DIR;
}
#elif defined(__MACOS__) || defined(__APPLE__)
char *fs_tmp_dir(void)
{
    return getenv("TMPDIR");
}
#else
char *fs_tmp_dir(void)
{
    return "/tmp";
}
#endif
char *fs_tmp(char *filename)
{
    char *tmp_dir = fs_tmp_dir();
    char *tmp_file = malloc(strlen(tmp_dir) + strlen(filename) + 2);
    sprintf(tmp_file, "%s/%s", tmp_dir, filename);
    return tmp_file;
}
int fs_exists(const char* path)
{
    FILE *f = fopen(path, "r");
    if (f == NULL)
    {
        return 0;
    }
    fclose(f);
    return 1;
}
#if defined(__unix__) 
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
char* fs_home_dir(void)
{
    char* home = getenv("HOME");
    if (home == NULL)
    {
        struct passwd *pw = getpwuid(getuid());
        return pw->pw_dir;
    }   
    return home;
}
#elif defined(_WIN32)
char* fs_home_dir(void)
{
    char* home = malloc(2 + strlen(getenv("HOMEPATH")));
    sprintf(home, "%s\\%s", getenv("HOMEDRIVE"), getenv("HOMEPATH"));
    return home;
}
#else
char* fs_home_dir(void)
{
    log_fatal("fs_home_dir() not implemented for this platform! Aborting.");
    exit(1);
    return NULL;
}
#endif
#if defined(__unix__)
#include <sys/stat.h>
#include <sys/types.h>
void fs_mkdir(const char *path)
{
    mkdir(path, 0755);
}
#elif defined(_WIN32)
#include <windows.h>
void fs_mkdir(const char *path)
{
    CreateDirectory(path, NULL);
}
#endif

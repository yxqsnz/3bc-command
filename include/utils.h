#ifndef __UTILS_H__
#include <curl/curl.h>
int curl_progress_bar(void *ptr, double total_to_download,
                      double now_downloaded, double total_to_upload,
                      double now_uploaded);

char *humansize_bytes(double bytes);
CURLcode ecurl_download(const char *url, const char *filename);
void set_curlpb_message(char *message);
char *fs_tmp_dir(void);
char *fs_tmp(char *filename);
int fs_exists(const char* path);
char* cli_3bc_root(void);
char* fs_home_dir(void);
char* cli_3bc_cache(void);
char* cli_3bc_config(void);
char* cli_3bc_cache_file(const char* filename);
char* cli_make_dirs_if_not_exist(void);
void fs_mkdir(const char* path);
#define __UTILS_H
#endif


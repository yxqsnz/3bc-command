#ifndef __INCLUDE_TOOLS_H__
#include <macros.h>
#include <github.h>
void show_help(ME);
void vm_add(ME, char *version, github_repository_t repo);
void update(github_repository_t *repo);
#define __INCLUDE_TOOLS_H__
#endif

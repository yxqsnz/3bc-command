#include <getopt.h>
#include <github.h>
#include <log.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <tools.h>
#include <utils.h>
#include <string.h>
enum command {
  UPDATE,
  VM_ADD,
  NONE = -1
};
int main(int argc, char* argv[])
{
  // TODO: Uninstall
  int uninstall = 0;
  if(argc > 1 && strcmp(argv[1], "--uninstall") == 0)
  {
    uninstall = 1;
  }
  if(!uninstall) {
    cli_make_dirs_if_not_exist();
  }
  enum command command = NONE;
  github_repository_t repo = {
      .owner = "RodrigoDornelles",
      .name = "3bc-lang",
  };

  int opt;
  char *vm_version = NULL;
  int enable_verbose_logging = false;
  const struct option options[] = {{"help", no_argument, 0, '?'},
                                   {"add", required_argument, NULL, 'a'},
                                   {"verbose", no_argument, 0, 'v'},
                                   {"update", no_argument, 0, 'u'},
                                   {0, 0, 0, 0}};
  if (argc <= 1)
    show_help(argv[0]);
  while ((opt = getopt_long(argc, argv, "hu?:a:v", options, NULL)) != EOF)
  {
    switch (opt)
    {
    case 'h':
    case '?':
      show_help(argv[0]);
      break;
    case 'a':
      vm_version = optarg;
      command = VM_ADD;
      break;
    case 'u':
      command = UPDATE;
      break;
    case 'v':
      enable_verbose_logging = true;
      log_debug("---3BC CLI TOOL---");
  
      break;
    }
  }
  if (opterr == 0)
  {
    return 1;
  }
  if (enable_verbose_logging)
  {
    log_set_level(LOG_TRACE);
  }
  else
  {
    log_set_level(LOG_FATAL);
  }
  
  switch(command)
  {
    case VM_ADD:
      vm_add(argv[0], vm_version, repo);
      break;
    case UPDATE:
      update(&repo);
      break;
  }
//  github_repository_update(&repo, "releases", false, true);

  return 0;
}

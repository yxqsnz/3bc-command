#include <macros.h>
#include <stdio.h>
#include <tools.h>
void show_help(ME)
{
  printf("USAGE: %s <OPTION> [FLAGS]\n"
         "Commands:\n"
         "\t> vm -a(--add) <VERSION> # Install a 3bc version\n"
         "\t> [FILE] # run a 3bc file or run REPL.\n"
         "\t> -? OR -h # show this message\n",
         me);
}

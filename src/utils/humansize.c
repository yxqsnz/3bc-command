#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <log.h>
#include <string.h>
char *humansize_bytes(double bytes)
{
    char *suffix = "B";
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "K";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "M";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "G";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "T";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "P";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "E";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "Z";
    }
    if (bytes > 1024)
    {
        bytes /= 1024;
        suffix = "Y";
    }
    char *result = malloc(strlen(suffix) + 32);
    int alloc_size = sprintf(result, "%.2f%s", bytes, suffix);
    return result;
}

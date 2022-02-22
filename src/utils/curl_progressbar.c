#include "log.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <utils.h>
int curl_progress_bar(void *ptr, double total_to_download,
                      double now_downloaded, double total_to_upload,
                      double now_uploaded)
{
  // printf("\x1b[1F");
  printf("\x1b[2K");
  fflush(stdout);
  if (total_to_download <= 0.0)
  {

    return 0;
  }
  if (now_downloaded == 0.0)
  {
    log_warn("total to download is zero! Probaly file is corrupted OR CURL is "
             "downloading metadata.");
    log_info("downloading %s", humansize_bytes(total_to_download));
    return 0;
  }
  int totaldotz = 40;
  double fractiondownloaded = now_downloaded / total_to_download;
  int dotz = (int)round(fractiondownloaded * totaldotz);

  int ii = 0;
  printf("info: downloaded %3.1f%% [", fractiondownloaded * 100);
  for (; ii < dotz; ii++)
  {
    printf("=");
  }
  for (; ii < totaldotz; ii++)
  {
    printf(" ");
  }
  char *now_downloaded_fmt = humansize_bytes(now_downloaded);
  char *total_to_download_fmt = humansize_bytes(total_to_download);
  printf("] (%s of %s)\r", now_downloaded_fmt, total_to_download_fmt);
  fflush(stdout);
  free(now_downloaded_fmt);
  free(total_to_download_fmt);

  return 0;
}

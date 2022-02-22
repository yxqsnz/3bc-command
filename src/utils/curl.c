#include <curl/curl.h>
#include <curl/easy.h>
#include <log.h>
#include <stdio.h>
#include <utils.h>
const char *USER_AGENT = "3bc/cli unknown";
char *MESSAGE = "";
void set_curlpb_message(char *message) { MESSAGE = message; }
static size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
  size_t written = fwrite(ptr, size, nmemb, stream);
  return written;
}

CURLcode ecurl_download(const char *url, const char *filename)
{
  CURL *curl = curl_easy_init();
  CURLcode res;
  FILE *fp;
  if (curl)
  {
    fp = fopen(filename, "wb");
    log_debug("making request to %s using {.useragent=%s,.to=%s}", url,
              USER_AGENT, filename);
    printf("%s", MESSAGE);
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_PROGRESSFUNCTION, curl_progress_bar);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
    curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 0L);
    curl_easy_setopt(curl, CURLOPT_USERAGENT, USER_AGENT);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    res = curl_easy_perform(curl);
    fclose(fp);
    return res;
  }
  else
  {
    return -1;
  }
}

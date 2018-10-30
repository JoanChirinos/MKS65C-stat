#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

int main() {
  struct stat* s = calloc(sizeof(struct stat), 1);
  stat("yaboi.txt", s);

  printf("filename: yaboi.txt\n");
  printf("file size: %lld bytes\n", s->st_size);
  printf("file mode: %o\n", s->st_mode);
  char date[36];
  strftime(date, 36, "%M.%m.%Y %H"s->st_atime)
  printf("time of last access: %s\n", strftime(s->st_atime);
}

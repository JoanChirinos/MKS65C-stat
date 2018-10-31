#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

int main() {
  struct stat* s = calloc(sizeof(struct stat), 1);
  stat("yaboi.txt", s);

  printf("filename: yaboi.txt\n");
  printf("file size: %ld bytes\n", s->st_size);
  printf("file mode: %o\n", s->st_mode);
  char date[36];
  strftime(date, 36, "%c", localtime(&(s->st_atime)));
  printf("time of last access: %s\n", date);

  printf("\nReadable size + mode\n");
  printf("file size: %ld B\n", s->st_size);
  printf("file mode: ");
  printf( (S_ISDIR(s->st_mode)) ? "d" : "-");
  printf( (s->st_mode & S_IRUSR) ? "r" : "-");
  printf( (s->st_mode & S_IWUSR) ? "w" : "-");
  printf( (s->st_mode & S_IXUSR) ? "x" : "-");
  printf( (s->st_mode & S_IRGRP) ? "r" : "-");
  printf( (s->st_mode & S_IWGRP) ? "w" : "-");
  printf( (s->st_mode & S_IXGRP) ? "x" : "-");
  printf( (s->st_mode & S_IROTH) ? "r" : "-");
  printf( (s->st_mode & S_IWOTH) ? "w" : "-");
  printf( (s->st_mode & S_IXOTH) ? "x" : "-");
  printf("\n");
}

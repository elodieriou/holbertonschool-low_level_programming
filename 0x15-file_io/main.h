#ifndef DEF_FILEDESCRIPTORS
#define DEF_FILEDESCRIPTORS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif

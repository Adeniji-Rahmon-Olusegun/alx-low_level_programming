#ifndef FILEIO_H
#define FILEIO_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#define BUFFER_SIZE 1024

#endif

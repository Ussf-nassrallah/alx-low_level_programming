#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *fn, size_t data);
int create_file(const char *fn, char *s);
int append_text_to_file(const char *fn, char *s);
char *generate_buffer(char *f);
void close_file(int f);

#endif

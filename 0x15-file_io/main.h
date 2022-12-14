#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filenam, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void close_file(int fd);
char *create_buffer(char *file);
#endif

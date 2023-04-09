#ifndef MAIN_H
# define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
# define MIN(X, Y) ((X) > (Y) ? (Y) : (X))
# define USER_RW 00600
# define FILE_FAILURE -1
# define FAIL -1
# define SUCCESSED 1
ssize_t read_textfile(const char *filename, size_t letters);
int		create_file(const char *filename, char *text_content);
int		append_text_to_file(const char *filename, char *text_content);
#endif

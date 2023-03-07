#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
char	*_memset(char *, char, unsigned int);
char	*_memcpy(char *, char *, unsigned int);
char	*_strchr(char *, char);
unsigned int	_strspn(char *, char *);
char		*_strpbrk(char *, char *);
char		*_strstr(char *, char *);
void		print_chessboard(char (*)[]);
void		print_diagsums(int *a, int size);
#endif

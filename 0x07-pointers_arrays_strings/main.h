#ifndef HEADER_FILE
#define HEADER_FILe

#include <unistd.h>
#include <stdio.h>


int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);



void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif

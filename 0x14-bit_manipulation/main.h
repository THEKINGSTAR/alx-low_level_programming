#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);

#endif

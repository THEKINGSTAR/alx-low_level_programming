#include "main.h"

/**
 * print_binary - convert fucntion
 *
 * Description:Write a function that prints
 * the binary representation of a number
 *
 * Format: see example
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 *
 * Prototype:  void print_binary(unsigned long int n);
 *
 * @n:where b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;   /*, j;*/
	/* char byte, bit; */

	if (n == '\0' || !n)
	{
		return;
	}
	else
	{
		for (i = 0; i < sizeof(n); i++)
		{
			/*if ((n & (1 << i)) != 0) */
			if (((n >> i) & 1) != 0)
				printf("1");
			else
				printf("0");
			/*
			 * byte = ((char*)&n)[i];
			 * for (j = 8; j > 0; j--)
			 * {
			 *bit  = (byte >> j) & 1;
			 *printf("%d", bit);
			 * }
			*/
		}

	}
}

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
 * @num:where b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
void print_binary(unsigned long int num)
{
	int i;
	int size = sizeof(unsigned int) * 8;	/* number of bits in an unsigned int */
	int lead_zro = 1;			/* flag to track if leading zeros have been printed */

	for (i = size - 1; i >= 0; i--)
	{
		int bit = (num >> i) & 1;	/* extract the i-th bit from num */

		if (bit == 0 || bit == 1)
		{
			if (bit || !lead_zro)
			{
				/* if the bit is 1 or leading zeros have been printed */
				printf("%d", bit);			/* print the bit */
				lead_zro = 0;			/* clear the leading_zero flag */
			}
		}
		else
		{
			return;
		}
	}
	if (lead_zro)
	{
		/* if num is 0, print a single 0 */
		printf("0");
	}
}
/**
 * _print_binary - convert fucntion
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
void _print_binary(unsigned long int n)
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

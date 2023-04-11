#include "main.h"

/**
 * power - return function
 *
 * Description:function to return power of base and degrre
 *
 * @base:base numb
 * @degree:degree of raise
 *
 * Return:the power of 2 input num
 *
 */

unsigned int power(unsigned int base, unsigned int degree)
{
	unsigned int result = 1;
	unsigned int term = base;

	while (degree)
	{
		if (degree & 1)
		{
			result *= term;
		}
		term *= term;
		degree = degree >> 1;
	}
	return (result);
}
/**
 * binary_to_uint - convert fucntion
 *
 * Description:Write a function that converts
 * a binary number to an unsigned int.
 *
 * Prototype: unsigned int binary_to_uint(const char *b);
 *
 * @b:where b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int l = 0, len = 0, dig;
	const char *tmp;

	/* printf("the input STRING is %s \n", b); */
	tmp = b;
	if (*b == '\0' || b == NULL)
	{	return (0);	}
	else
	{
		while (*tmp++ != '\0')
		{
			len++;
		}
		if (len > 510)
		{ return(0); }
		/* printf("Len : %d\n", len); */
		while (len)
		{
			dig = (b[len - 1] - '0'); /* printf("Dig : %d\n", dig); */
			if (dig == 0 || dig == 1)
			{
				/* printf("%d :: %d\n" , num, conv); */
				conv += (dig * power(2, l));
				/*
				 * dig = dig >> 1;
				 * dig = dig & 1;
				 * conv += dig;
				 */
				l++;
				len--;
			}
			else
			{
				return (0);
			}
		}
		return (conv);
	}
	exit(0);
}

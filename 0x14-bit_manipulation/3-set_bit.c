#include "main.h"

/**
 * set_bit - change bit function
 *
 * Description:Write a function that sets
 * the value of a bit to 1 at a given index.
 *
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 *
 * @n:the givin number
 * @index:the bit index to be changed in the @n number
 * Where index is the index, starting from 0 of the bit you want to set
 *
 * Return:1 if it worked, or -1 if an error occurred
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n == '\0' || !*n || sizeof(n) * 8 < index)
	{
		return (-1);
	}
	else
	{
		/*creating musk wit the */
		int mask = 1 << index, b;

		b = 1;
		*n = ((*n & ~mask) | b << index);
		return (1);
	}
	return (-1);
}

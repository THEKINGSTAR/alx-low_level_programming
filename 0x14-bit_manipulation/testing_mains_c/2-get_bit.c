#include "main.h"

/**
 * get_bit - get bit function
 *
 * Description:Write a function that returns
 * the value of a bit at a given index.
 *
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 *
 * where
 * @index:is the index, starting from 0 of the bit you want to get
 * @n:the givin number
 *
 * Return:the value of the bit at index index or -1 if an error occured
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*creating musk wit the */
	int mask, bit;

	mask = (n >> index);
	/* printf("mask : %d\n", mask); */

	bit = mask & 1;
	/* printf("bit : %d\n",bit); */

	return (bit);
}

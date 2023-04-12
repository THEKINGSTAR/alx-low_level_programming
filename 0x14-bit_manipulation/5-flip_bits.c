#include "main.h"

/**
 * countSetBits - Function that count set bits
 *
 * @n:input integer to count its bits
 * Description:Function that count set bits
 *
 * Return:the counted bits
 */
unsigned int countSetBits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * FlippedCount - Function that return count of flipped number
 *
 * @a:firts input integer
 * @b:the integer to filp to
 *
 * Description:Function that return count of flipped number
 * Return: return count of flipped number
 *
 */
unsigned int FlippedCount(unsigned long int a, unsigned long int b)
{
	/* Return count of set bits in a XOR b */
	return (countSetBits(a ^ b));
}




/**
 *  flip_bits - flip bit function
 *
 * Description:Write a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * Prototype:unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * You are not allowed to use the % or / operators
 *
 * @n:the givin number
 * @m:the flip to number
 *
 *
 * Return: the number of bits you would need
 * to flip to get from one number to another.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (FlippedCount(n, m));
}

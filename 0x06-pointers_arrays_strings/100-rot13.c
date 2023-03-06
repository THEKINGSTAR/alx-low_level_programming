#include "main.h"
/**
 * leet- output function
 *
 * @s: the strin to encodes
 *
 * Description:'Write a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation'
 *
 * Return:  the pointer to coded strng .
 */
char *rot13(char *s)
{
	char *coded ,*tmp;

	
	while (*s)
	{
		tmp = s;
		*coded++ = *(tmp + 13);
	}
return (coded);
}

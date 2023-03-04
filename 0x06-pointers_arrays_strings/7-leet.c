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
char *leet(char *s)
{
	char *coded = s;
	int i;
	char cha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int cod[]  = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*s)
	{
		if (*s == 'a' || *s == 'A' || *s == 'e'	|| *s == 'E' || *s == 'O'
			|| *s == 'o' || *s == 't' || *s == 'T' || *s == 'l' || *s == 'L')
		{
		       i = 0;
			while (*s != cha[i])
			{
				i++;
			}
			*s = cod[i];
		}
		s++;
	}
	return (coded);
}

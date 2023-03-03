#include "main.h"
/**
 * string_toupper- output function
 *
 * @s: the strin to conver
 *
 * Description:'Write  function that changes
 * all lowercase letters of a string to uppercase.'
 *
 * Return:  the pointer to upper strng .
 */
char *string_toupper(char *s)
{
	char *upr = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (upr);
}

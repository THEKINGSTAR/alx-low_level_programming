#include "main.h"
/**
 * cap_string- output function
 *
 * @s: the strin to conver
 *
 * Description:'Write a function that capitalizes all words of a string.
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }'
 *
 * Return:  the pointer to Capitalize strng .
 */
char *cap_string(char *s)
{
	char *upr = s;

	if (*s >= 'a' && *s <= 'z')
	{
		*s = *s - 32;
	}
	s++;
	while (*s)
	{
		if (*s >= 32 && *s <= 59)
		{
			s++;
			if (*s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
			}
			continue;
		}
		s++;
	}
	return (upr);
}

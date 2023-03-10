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
		if ((*s >= 32 && *s <= 46 && *s != 45)
				|| *s == 59 || *s == 63 || *s == 123 || *s == 125)
		{
			s++;
			if (*s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
			}
			else
				continue;
		}
		else if (*s == '\n')
		{
			s++;
			if (*s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
			}
		}
		else if (*s == '\t')
		{
			s++;
			if (*s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
			}
		}
		s++;
	}
	return (upr);
}

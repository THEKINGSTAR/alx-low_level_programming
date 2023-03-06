#include  "main.h"


/**
 * _strchr-memory locating function
 *
 * @s:string to be serch in
 * @c:character to be found
 *
 * Description:'fuction to search string with charcter
 * and return poihter to found location'
 *
 * Return:return a pointer to the memory of found location
 *
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	while (*s != '\0')
	{
		if (c == *s)
		{
			ptr = s;
			return (ptr);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}

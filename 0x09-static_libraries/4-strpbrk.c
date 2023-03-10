#include  "main.h"

/**
 * _strpbrk - locating function
 *
 * @s:string to be serch in
 * @accept:character to be found
 *
 * Description:'Write a function that searches a string for
 * any of a set of bytes * The _strpbrk() function locates
 * the first occurrence in * the string s of
 * any of the bytes in the string accept.'
 *
 * Return:pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			/* printf("search for : %c   IN : %c.\n", *ptr, *s); */
			if (*ptr == *s && *ptr != '\0')
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	ptr = NULL;
	return (ptr);
}

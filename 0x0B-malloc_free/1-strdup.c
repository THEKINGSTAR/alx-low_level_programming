#include "main.h"

/**
 * strdup - copy string
 *
 * @string: the input strin 
 *
 *
 * Description:'Write a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.'
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc, and can be freed with free.
 *
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 *
 */

 char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (*str == '\0')
	{
		ptr = NULL;
	}
	else if (*str != '\0')
	{
		i = 0;
		ptr = malloc(sizeof(char) * i);
		while(str[i] != '\0')
		{
			ptr[i] = str[i];	
			i++;
		}
	}
	return (ptr);
	free(ptr);
}

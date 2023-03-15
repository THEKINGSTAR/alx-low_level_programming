#include "main.h"
/**
 *  _strlen - output function
 *
 * @cs: the input string
 *
 * Description:'Write a function that returns the length of a string.'
 *
 * Return: function has no return values
 */
int _strlen(char *cs)
{
	int len = 0;

	while (cs[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strdup - copy string
 *
 * @str: the input string
 *
 * Description:'Write a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.'
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 *
 */
char *_strdup(char *str)
{
	int len = _strlen(str);
	int i;
	char *ptr;

	if (str != NULL)
	{
		ptr = malloc(sizeof(char) * (len + 1));
		for (i = 0; i < len && str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		while (i < len)
		{
			ptr[i] = '\0';
			i++;
		}
	}
	else
	{
		ptr = NULL;
	}
	return (ptr);
	free(ptr);

}

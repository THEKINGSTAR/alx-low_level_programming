#include "main.h"
/**
 *  _strlen - output function
 *
 * @crs: the input string
 *
 * Description:'Write a function that returns the length of a string.'
 *
 * Return: function has no return values
 */
int _strlen(char *crs)
{
	int len = 0;
	char *cs;


	cs = crs;
	while (cs[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - copy string
 *
 * @s1: the first input string
 * @s2: the second input string
 *
 * Description:'Write a function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 *
 * Return:newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2);
	int i, i2;
	char *ptr;
	char *newstr;

	newstr = malloc((sizeof(char) * (len1)) + (sizeof(char) * (len2 + 1)));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = newstr;
		for (i = 0; i < len1 ; i++)
		{
			newstr[i] = s1[i];
		}
		for (i2 = 0; i2 < len2 ; i2++)
		{
			newstr[i] = s2[i2];
			i++;
		}
		newstr[i] = '\0';
		return (ptr);
		free(ptr);
	}
	return (NULL);
}

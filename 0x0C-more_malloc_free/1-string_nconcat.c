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
 * string_nconcat - copy string
 *
 * @s1: the first input string
 * @s2: the second input string
 * @n: followed by the first n bytes of s2
 *
 * Description:'Write a function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * If n is greater or equal to the length of s2 then use the entire string s2
 * The function should return NULL on failure
 *
 * Return:newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i, i2, n2 = n;
	char *ptr, *newstr;

	if (s1 == NULL)
	len1 = 0;
	else
	{
		len1 = _strlen(s1);
	}
	if (s2 == NULL)
	len2 = 0;
	else
	{
		len2 = _strlen(s2);
	}
	if (n2 >= len2)
	n2 = len2;
	newstr = malloc((sizeof(char) * (len1)) + (sizeof(char) * (n2 + 1)));
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
		for (i2 = 0; i2 < n2; i2++)
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

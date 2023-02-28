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
 * _strcpy - output function
 *
 * @dest: the array to be copied to
 * @src: the source array to copy from
 *
 * Description:'Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.'
 *
 * Return:  the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);

	int i;

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}

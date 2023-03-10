#include "main.h"

/**
 * _strncpy - output function
 *
 * @dest: the array to be copied to
 * @src: the source array to copy from
 * @n: size of n bytes of source to be copied
 *
 * Description: 'Write a function that copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest.'
 *
 * Return:  the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

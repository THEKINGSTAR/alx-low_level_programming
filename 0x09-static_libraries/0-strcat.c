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
 * _strcat - output function
 *
 * @dest: the array to be copied to
 * @src: the source array to copy from
 *
 * Description:'This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte'
 *
 * Return:  the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int des_len;
	int src_len;
	int i;

	des_len = _strlen(dest);
	src_len = _strlen(src);

	for (i = 0; i < src_len && src[i] != '\0'; i++)
	{
		dest[des_len + i] = src[i];
	}
	dest[des_len + i] = '\0';

	return (dest);
}

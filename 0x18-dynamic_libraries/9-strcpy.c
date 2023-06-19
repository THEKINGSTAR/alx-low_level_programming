#include "main.h"
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
	char *ret = dest;

	if (*src != '\0')
	{
		while (*src)
		{
			*dest++ = *src++;
		}
	}
	return (ret);
}

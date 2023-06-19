#include "main.h"

/**
 *  _strncat- output function
 *
 * @dest: the array to be copied to
 * @src: the source array to copy from
 * @n: size of the source string
 *
 * Description:'This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte'
 *
 * Return:  the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int des_len;
	/* int src_len; */
	int i;

	des_len = _strlen(dest);
	/* src_len = _strlen(src); */

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[des_len + i] = src[i];
	}
	dest[des_len + i] = '\0';

	return (dest);
}

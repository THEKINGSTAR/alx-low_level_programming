#include  "main.h"


/**
 * _memcpy-fill memory function
 *
 * @dest:memory destenation to fill
 * @src:memory to copy from
 * @n: n bys of src to be fill in dest
 *
 * Description:'fuction to copy n of destination
 * memory block with n of source'
 *
 * Return:return a pointer to the memory destenation
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, size = n;
	char *ptr;

	ptr = src;

	for (i = 0; i < size ; i++)
	{
		dest[i] = ptr[i];
	}

	return (dest);

}

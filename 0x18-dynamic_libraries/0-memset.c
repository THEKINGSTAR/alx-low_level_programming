#include  "main.h"


/**
 * _memset-fill memory function
 *
 * @s:memorty location to fill
 * @b:contatnt to fill the memory location with
 * @n: n bys of s to be fill
 *
 * Description:'fuction to fill memory block with constant'
 *
 * Return:return a pointer to the memory erea
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i, size = n;
	char *ptr;

	ptr = s;

	for (i = 0; i < size ; i++)
	{
		ptr[i] = b;
	}

	return (ptr);

}

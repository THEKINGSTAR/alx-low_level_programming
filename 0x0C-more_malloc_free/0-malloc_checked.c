#include "main.h"


/**
 * *malloc_checked-return function
 *
 * Description:'Write a function that allocates memory using malloc.'
 *
 * @b: input size to allocate
 *
 * Return:function  pointer to the allocated memory
 * if malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}


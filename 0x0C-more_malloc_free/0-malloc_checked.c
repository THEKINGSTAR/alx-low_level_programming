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
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
		free(ptr);
		exit(98);
	}
	free(ptr);
}


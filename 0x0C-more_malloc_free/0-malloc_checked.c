#include "main.h"


/**
 * malloc_checked - return function 
 * 
 * Description: ' Write a function that allocates memory using malloc.'
 *
 * @b: input size to allocate
 *
 * Returns: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr,error;

	error = 98;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		ptr = &error;
		return (ptr);
	}
	else
	{
		return (ptr);
	
	}

}


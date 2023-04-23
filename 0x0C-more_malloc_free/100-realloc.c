#include "main.h"

/**
 * _realloc - pointer to array
 *
 * @ptr: the the char to fil the array with
 * @old_size: the size of the memory to creat the array with
 * @new_size: the new size allocated
 *
 * Description:'Write a function that reallocates a memory block
 * using malloc and free.
 * where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * old_size is the size, in bytes, of the allocated space for ptr
 * and new_size is the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptrIf ptr is NULL,
 * then the call is equivalent to malloc(new_size), for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 *
 * Return: Return NULL or ptr to new memory
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i, arln = nmemb * size;

	if (new_size > old_size)
	{
		return (ptr);
	}
	if (new_size == old_size)
        {
                return (ptr);
        }
	if (ptr == NULL)
	{
		malloc(new_size);
		for all values of old_size and new_size
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		The contents will be copied to the newly allocated space,
		in the range from the start of ptr up to the minimum of the old and new sizes
	}
	arr = malloc(size * nmemb);
	for (i = 0; i < arln; i++)
	{
		*(arr + i) = 0;
	}
	return (arr);
	free(arr);
}

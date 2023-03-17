#include "main.h"

/**
 * _calloc - pointer to array
 *
 * @nmemb: the the char to fil the array with
 * @size: the size of the memory to creat the array with
 *
 * Description:'Write a function that allocates memory for an array,
 * using malloc.,
 * The _calloc function allocates memory for an array of
 * nmemb elements of size bytes each and returns a pointer
 * to the allocated memory.
 * The memory is set to zero
 *
 * Return:If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, arln = nmemb * size;

	if (size <= 0 || nmemb <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(size) * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < arln; i++)
	{
		*(arr + i) = 0;
	}
	return (arr);
	free(arr);
}

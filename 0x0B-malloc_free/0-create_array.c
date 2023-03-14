#include "main.h"

/**
 * create_array - prints buffer in hexa
 *
 * @c: the the char to fil the array with
 * @size: the size of the memory to creat the array with
 *
 * Description:'Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * Returns NULL if size = 0'
 *
 * Return: Returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i, arsiz;

	if (size <= 0)
	{
		ptr = NULL;
	}
	else if (size > 0)
	{
		char *arr;

		arsiz = size;
		arr = malloc(sizeof(char) * arsiz);
		ptr = arr;
		for (i = 0; i < arsiz ; i++)
		{
			arr[i] = c;
		}
	}
	else
	{
		ptr =  NULL;
	}
	return (ptr);
	free(ptr);
}

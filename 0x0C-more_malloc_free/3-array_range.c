#include "main.h"

/**
 * array_range - pointer to array
 *
 * @min: the start input number
 * @max: the end input number
 *
 * Description:'Write a function that creates an array of integers.'
 *
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 *
 * Return:the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(arr) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
	free(arr);
}

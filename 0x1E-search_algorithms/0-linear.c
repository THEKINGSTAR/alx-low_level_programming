#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * And
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int result = -1;
	size_t i;

	if (array == NULL)
	{
		return (result);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			/*printf("Found %i at index: %li\n",value, i);*/
			result = i;
			return (result);
		}

	}
	return (result);
}

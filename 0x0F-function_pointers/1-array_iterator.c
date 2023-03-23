#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: array of elements
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Description:'Write a function that executes a function given
 * as a parameter on each element of an array..'
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, arsiz;

	if (array == NULL || size <= 0)
	{
		return;
	}
	else
	{
		arsiz = size;
		for (i = 0; i < arsiz; i++)
		{
			action(array[i]);
		}
	}
}

#include "function_pointers.h"

/**
 * int_index - fucntion to search array
 * @array: array of elements
 * @size: is the size of the array
 * @cmp: the numper to be searched for
 *
 * Description:'Write a function that searches for an integer.'
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 *
 * Return: int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, arsiz, ret, cmpval;

	ret = -1;
	if (array == NULL || size <= 0)
	{
		ret = -1;
	}

	arsiz = size;
	/*printf("size is : %d\n", arsiz);*/
	for (i = 0; i < arsiz; i++)
	{
		cmpval = cmp(array[i]);
		/* printf("%d , %d \n", array[i], cmpval); */
		if (i > 0 && array[i] != 0 && cmpval != 0)
		{
			ret = i;
			return (ret);
		}
	}
	return (ret);
}

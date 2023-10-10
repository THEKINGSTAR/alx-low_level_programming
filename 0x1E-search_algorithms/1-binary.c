#include "search_algos.h"
/**
 * binary_search-function searches for value using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * And
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
/*
 * function binary_search(A, n, T) is
 *   L := 0
 *   R := n − 1
 *   while L ≤ R do
 *	m := floor((L + R) / 2)
 *      if A[m] < T then
 *          L := m + 1
 *       else if A[m] > T then
 *           R := m − 1
 *       else:
 *           return m
 *   return unsuccessful
 */

int binary_search(int *array, size_t size, int value)
{
	int result = -1;
	size_t m, t;
	size_t L = 0, R = size - 1;

	if (array == NULL)
	{
		return (result);
	}

	while (L <= R)
	{
		printf("Searching in array:");
		for (t = L; t < R + 1; t++)
		{
			printf(" %i", array[t]);
			if (array[t] != array[R])
			{
				printf(",");
			}
		}
		printf("\n");
		m = ((L + R) / 2);
		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
		{
			result = m;
			return (result);
		}
	}
	return (result);
}

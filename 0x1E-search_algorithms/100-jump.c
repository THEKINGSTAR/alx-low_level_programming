#include "search_algos.h"
#include <math.h>
/**
 * jump_search-searches for value in sorted array using Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * And
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
/*
 * //https://en.wikipedia.org/wiki/Jump_search
 * algorithm JumpSearch is
 * input: An ordered list L, its length n and a search key s.
 * output: The position of s in L, or nothing if s is not in L.
 * a ← 0
 * b ← ⌊√n⌋
 * while Lmin(b,n)-1 < s do
 *	a ← b
 *	b ← b + ⌊√n⌋
 *	if a ≥ n then
 *		return nothing
 * while La < s do
 *	a ← a + 1
 *	if a = min(b, n)
 *		return nothing
 * if La = s then
 *	return a
 * else
 *	return nothing
 */

int jump_search(int *array, size_t size, int value)
{
	int result = -1;
	int a = 0;
	int n = size;
	int b = (int)sqrt(n);
	int s = value;
	int min, vl_btw = 0;

	if (array == NULL)
	{
		return (result);
	}

	min = (fmin(b, n) - 1);
	while (array[min] < s)
	{
		printf("Value checked array[%i] = [%i]\n", array[a], array[a]);
		if (vl_btw == 0 && min < b)
		{
			printf("Value found between indexes[%i] and [%i]\n", array[b], array[b]);
			vl_btw = 1;
		}
		a = b;
		b = b + sqrt(n);
		if (a >= n)
			return (result);
		min = (fmin(b, n) - 1);
	}
	while (array[a] < s)
	{
		printf("Value checked array[%i] = [%i]\n", array[a], array[a]);
		a = a + 1;
		if (a == fmin(b, n))
			return (result);
	}
	if (array[a] == s)
	{
		result = s;
		return (result);
	}
	return (result);
}

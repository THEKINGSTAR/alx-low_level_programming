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
	int result = -1, a = 0, n = (int)size;
	int n_sqrt = (int)sqrt(n), n_a;
	int b = n_sqrt, s = value, min = 0;

	if (array == NULL)
	{
		return (result);	
	}
	min = (fmin(b, n));
	while (array[min - 1] < s)
	{	printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a = b;
		b = b + n_sqrt;
		if (a >= n)
		{
			break;
		}
		min = (fmin(b, n));
	}
	if (array[a] >= s)
	{
		printf("Value found between indexes[%i] and [%i]\n - array[a] >= s \n", a - n_sqrt, a);
		n_a = a - n_sqrt;
	}
	else if (array[0] <= s && array[n_sqrt] >= s)
	{
		printf("Value found between indexes[%i] and [%i]\n - array[a] >= s \n", 0, n_sqrt);
		n_a = 0;
	}
	else
	{
		printf("Value found between indexes[%i] and [%i]\n -  \n", a - n_sqrt, a);
		n_a = a - n_sqrt;
	}
	a = n_a;
	while (array[a] < s)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a++;
		min = fmin(b, n);
		if (array[a] == min)
			break;
	}
	if (array[a] == s)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		result = a;
		return (result);
	}
	return (result);
}

	/*
	printf("MIN:%i, A:%i, B:%i, FOUND VALUE \n", min, a, b);
	printf("Value found between indexes[%i] and [%i]\n", b, a);
	printf("Value checked array[%i] = [%i]\n", a, array[a]);
	printf("Value found between indexes[%i] and [%i]\n", a, b + a);
	*/

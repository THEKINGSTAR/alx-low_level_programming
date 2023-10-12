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
	int result = -1, a = 0, n = size - 1;
	int b = (int)sqrt(n);
	int s = value, min;

	if (array == NULL)
	{	return (result);	}
	min = (fmin(b, n) - 1);
	/*printf("MIN:%i, A:%i, B:%i,VALUE:%i FOUND VALUE\n", min, a, b, s);*/
	while (array[min] < s)
	{	printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a = b;
		b = b + (int)sqrt(n);
		min = (fmin(b, n) - 1);
		if (a >= n)
			break;
	}
	b = (int)sqrt(n);
	/*printf("MIN:%i, A:%i, B:%i, FOUND VALUE \n", min, a, b);*/
	printf("Value checked array[%i] = [%i]\n", a, array[a]);
	printf("Value found between indexes[%i] and [%i]\n", a, b + a);
	while (array[a] < s)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a++;
		/*printf("MIN:%i, A:%i, B:%i, SECOND LOOP \n", min, a, b);*/
		min = fmin(b, n);
		if (array[a] == min)
			break;
	}
	if (array[a] == s)
	{	/*printf("MIN:%i, A:%i, B:%i, FOUND VALUE \n", min, a, b);*/
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		result = a;
		return (result);
	}
	return (result);
}


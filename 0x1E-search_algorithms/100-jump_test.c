#include "search_algos.h"
#include <stdio.h>
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
int _jump_search(int *array, size_t size, int value)
{
	int result = -1, a = 0, n = size;
	int n_sqrt = sqrt(n), n_a;
	int b = n_sqrt, s = value, min = 0;

	if (array == NULL)
		return (result);
	min = (fmin(b, n));
	while (array[min - 1] < s)
	{	printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a = b;
		b = b + n_sqrt;
		if (a >= n)
		{
			break;
		}
		min = (fmin(b, n));	}
	if (array[0] <= s && array[n_sqrt] >= s)
	{	printf("Value found between indexes[%i] and [%i]\n", 0, n_sqrt);
		n_a = 0;	}
	else if (array[a] <= s && array[a + n_sqrt] >= s)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		printf("Value found between indexes[%i] and [%i]\n", a, a + n_sqrt);
		n_a = a;
	}
	else
	{	printf("Value found between indexes[%i] and [%i]\n", a - n_sqrt, a);
		n_a = a - n_sqrt;	}
	a = n_a;
	while (array[a] < s && a < n)
	{	printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a++;
		min = fmin(b, n);
		if (array[a] == min)
			break;	}
	if (array[a] == s)
	{	printf("Value checked array[%i] = [%i]\n", a, array[a]);
		result = a;
		return (result);	}
	return (result);	}

	/*
	 * USED PRINT STATMENTS TO CHECK THE LOOP
	 * printf("MIN:%i, A:%i, B:%i, FOUND VALUE \n", min, a, b);
	 * printf("Value found between indexes[%i] and [%i]\n", b, a);
	 * printf("Value checked array[%i] = [%i]\n", a, array[a]);
	 * printf("Value found between indexes[%i] and [%i]\n", a, b + a);
	 *
	 * printf("Value found between indexes[%i] and [%i]\n-array[a] >= s \n"
	 * ,a - n_sqrt, a);
	 *
	 * printf("Value found between indexes[%i] and [%i]\n
	 * -array[0] <= s && array[n_sqrt] >= s\n", 0, n_sqrt);
	 *
	 *  printf("Value found between indexes[%i] and [%i]\n -else  \n"
	 *  , a - n_sqrt, a);
	 *
	 */
int __jump_search(int *array, size_t size, int value) {
    int result = -1;
    int a = 0;
    int b = (int)sqrt(size);
    int s = value;
    int n = size;

    if (array == NULL) {
        return result;
    }

    printf("Value checked array[0] = [%d]\n", array[0]);

    while (array[a] < s) {
        printf("Value checked array[%d] = [%d]\n", a, array[a]);
        a = b;
        b += (int)sqrt(size);
        if (a >= n) {
            break;
        }
        printf("Value checked array[%d] = [%d]\n", a, array[a]);
    }

    printf("Value found between indexes [%d] and [%d]\n", a - (int)sqrt(size), a);

    while (array[a] < s) {
        a++;
        if (a == n) {
            break;
        }
        printf("Value checked array[%d] = [%d]\n", a, array[a]);
    }

    if (array[a] == s) {
        result = a;
    }

    if (result != -1) {
        printf("Found %d at index: %d\n\n", s, result);
    } else {
        printf("Value not found in the array\n\n");
    }

    return result;
}

int jump_search(int *array, size_t size, int value) {
    int result = -1;
    int a = 0;
    int b = (int)sqrt(size);
    int s = value;
    int n = size;

    if (array == NULL) {
        return result;
    }

    printf("Value checked array[0] = [%d]\n", array[0]);

    while (array[b] < s && b < n) {
        printf("Value checked array[%d] = [%d]\n", b, array[b]);
        a = b;
        b += (int)sqrt(size);
    }

    printf("Value found between indexes [%d] and [%d]\n", a, b);

    while (array[a] < s && a < n) {
        printf("Value checked array[%d] = [%d]\n", a, array[a]);
        a++;
    }

    if (array[a] == s) {
        result = a;
    }

    if (result != -1) {
        printf("Found %d at index: %d\n\n", s, result);
    } else {
        printf("Value not found in the array\n\n");
    }

    return result;
}

int ___jump_search(int *array, size_t size, int value) {
    int result = -1;
    size_t a = 0;
    size_t b = (size_t)sqrt(size);
    int s = value;

    if (array == NULL) {
        return result;
    }

    printf("Value checked array[0] = [%d]\n", array[0]);
    while (array[b] < s && b < size) {
        printf("Value checked array[%lu] = [%d]\n", b, array[b]);
        a = b;
        b += (size_t)sqrt(size);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", a, b);
    while (array[a] < s && a < size) {
        printf("Value checked array[%lu] = [%d]\n", a, array[a]);
        a++;
    }
    if (array[a] == s) {
        result = (int)a;
    }
    return result;
}

#include <stdio.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[15] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 47, 89, 160
	};
	printf("Found at index: %d\n", jump_search(array, 15, 123456789));
	return (0);
}
/*
Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value checked array[12] = [47]
Value found between indexes [12] and [15]
Value checked array[12] = [47]
Value checked array[13] = [89]
Value checked array[14] = [160]
Found at index: -1
*/

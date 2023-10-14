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
		0, 1, 2, 3, 4, 5, 6, 7, 9, 9, 11, 23, 47, 89, 160
	};
	printf("Found at index: %d\n", jump_search(array, 15, 9));
	return (0);
}
/*
Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value found between indexes [6] and [9]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [9]
Found at index: 8
*/

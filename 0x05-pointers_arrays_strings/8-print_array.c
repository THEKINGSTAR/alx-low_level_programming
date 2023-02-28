#include "main.h"

/**
 *  print_array - output function
 *
 * @a: the input array
 * @n:  the number of elements of the array to be printed
 *
 * Description:'Write a function that prints n elements
 * of an array of integers, followed by a new line.'
 *
 * Return: function has no return values
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

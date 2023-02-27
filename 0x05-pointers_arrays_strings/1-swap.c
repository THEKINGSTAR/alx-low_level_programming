#include "main.h"

/**
 *  swap_int - wsap function
 *
 * @a: the input parameter we want to modifie
 * @b: the input tath will swap with
 * Description:'Write a function that swaps the values of two integers.'
 *
 * Return: function has no return values
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

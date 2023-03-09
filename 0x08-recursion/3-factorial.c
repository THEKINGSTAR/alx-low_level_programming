#include "main.h"

/**
 * factorial - return function
 *
 * @n:the input number
 *
 * Description:'If n is lower than 0,
 * the function should return -1 to indicate an error'
 *
 * Return: returns the length of a string.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

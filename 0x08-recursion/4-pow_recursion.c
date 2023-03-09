#include "main.h"

/**
 * _pow_recursion - return function
 *
 * @x:the input number
 * @y:the power to raise to
 *
 * Description:'Write a function that returns
 * the value of x raised to the power of y.'
 *
 * Return: returns the power of int
 * If y is lower than 0, the function should return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	x *= _pow_recursion(x, y - 1);

	return (x);
}

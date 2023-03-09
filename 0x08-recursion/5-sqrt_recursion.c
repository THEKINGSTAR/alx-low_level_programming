#include "main.h"


int root_calculate(int root, int n)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	root = root_calculate((root + 1), n);
	return (root);
}

/**
 * _sqrt_recursion - return function
 *
 * @n:the input number
 * 
 * Description:'Write a function that returns the
 * natural square root of a number.'
 *
 * Return:f n does not have a natural square root,
 * the function should return -1.
 */
int _sqrt_recursion(int n)
{
	int sroot;

	sroot = 1;
	if (sroot < n)
	{
		sroot = root_calculate(sroot, n);
	}
	return (sroot);
}

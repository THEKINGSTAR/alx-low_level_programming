#include "main.h"
/**
 * root_calculate - return function
 *
 * @n:the input number
 * @root: the start calcutae from
 * Description:'Write a function that returns the
 * natural square root of a number.'
 *
 * Return:f n does not have a natural square root,
 * the function should return -1.
 */
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
 * is_prime_number - return function
 *
 * @n:the input number
 *
 * Description:'Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.'
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	int sroot;
	int is_prime;

	sroot = 1, is_prime = 0;
	if (sroot < n && !(n < 0))
	{
		sroot = root_calculate(sroot, n);
	}
	else if (n < 0)
	{
		sroot = -1;
	}

	if (sroot == -1 && n > 0)
		is_prime = 1;
	else if (sroot == -1)
		is_prime = 0;

	return (is_prime);
}

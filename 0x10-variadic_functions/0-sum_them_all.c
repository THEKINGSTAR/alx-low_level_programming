#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - output function
 *
 * @n:the input number of arguments
 *
 * Description:'Write a function that returns the sum of all its parameters.'
 *
 * Return: sum of all n , f n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int ret, sum, l, size;
	va_list arguments;

	ret = 0, size = n, sum = 0;
	va_start(arguments, n);
	if (n > 0)
	{
		for (l = 0; l < size; l++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
		ret = sum;
	}
	return (ret);
}

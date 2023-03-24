#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_numbers - output function
 *
 * @n:is the number of integers passed to the function
 * @separator:where separator is the string to be printed between numbers
 *
 * Description:'Write a function that prints numbers, followed by a new line.'
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 *
 * Return: function has no return value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int l, size;
	va_list arguments;

	size = n;
	va_start(arguments, n);
	if (n > 0)
	{
		for (l = 0; l < size; l++)
		{
			printf("%d", va_arg(arguments, int));
			if (separator != NULL && l != (size - 1))
				printf("%s", separator);
		}
		va_end(arguments);
	}
	printf("\n");
}

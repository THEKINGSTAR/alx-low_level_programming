#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_strings - output function
 *
 * @n: is the number of strings passed to the function
 * @separator:is the string to be printed between the strings
 *
 * Description:'Write a function that prints strings, followed by a new line.'
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 *
 * Return: function has no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int l, size;
	va_list arg;
	char *str;

	size = n;
	va_start(arg, n);
	/* str = va_arg(arg, char *); */
	if (n > 0)
	{
		for (l = 0; l < size; l++)
		{
			str = va_arg(arg, char *);

			if (str == NULL)
			{
				printf("(nill)");

			}
			else
				printf("%s", str);

			if (separator != NULL && l != (size - 1))
				printf("%s", separator);
		}
		va_end(arg);
	}
	printf("\n");
}

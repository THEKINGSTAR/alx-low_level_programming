#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_strings - output function
 *
 * @format: is a list of types of arguments passed to the function
 *
 * Description:'Write a function that prints anything.'
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 *
 * Return: function has no return value
 */
void print_all(const char * const format, ...)
{
	int l, size;
	va_list arg;
	char *str;

	size = n;
	va_start(arg, n);
	
	for (l = 0; l < size; l++)
	{
		str = va_arg(arg, char *);
		if (str == NULL || *str == '\0')
		{
			printf("(nill)");
		}
		else
			printf("%s", str);

		if (separator != NULL && l != (size - 1))
		{
			printf("%s", separator);
		}
		va_end(arg);
	}
	printf("\n");
}

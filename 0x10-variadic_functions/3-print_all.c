#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_all - output function
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
	va_list arg;
	int i;
	char *str;

	i = 0;
	va_start(arg, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case  's':
				str = va_arg(arg, char*);
				if (str == NULL || *str == '\0')
				{printf("(nill)");
					break; }
				printf("%s", str);
				break;
			case  'i':
				printf("%i", va_arg(arg, int));
				break;
			case 'f':
			printf("%f", va_arg(arg, double));
			break;
		}
		if ((format[i] == 'c' || format[i] == 's' || format[i] == 'i' ||
				format[i] == 'f') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(arg);
	printf("\n");
}

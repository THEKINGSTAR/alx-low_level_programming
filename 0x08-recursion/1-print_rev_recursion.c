#include "main.h"

/**
 *  _print_rev_recursion- output function
 *
 * @s:the input string
 *
 * Description:'.Write a function that prints a string in reverse.'
 *
 * Return: function has no return values
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
	}
}

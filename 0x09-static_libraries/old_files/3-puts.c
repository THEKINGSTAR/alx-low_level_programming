#include "main.h"

/**
 *  _puts - output function
 *
 * @str: the input string
 *
 * Description:'Write a function that print string follow new line.'
 *
 * Return: function has no return values
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		++str;
	}
	putchar('\n');
}

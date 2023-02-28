#include "main.h"

/**
 * puts2 - output function
 *
 * @str: the input string
 *
 * Description:'Write a function that print string follow new line.'
 *
 * Return: function has no return values
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		++str;
		++str;
	}
	putchar('\n');
}

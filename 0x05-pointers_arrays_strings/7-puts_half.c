#include "main.h"

/**
 *  _strlen - output function
 *
 * @s: the input string
 *
 * Description:'Write a function that returns the length of a string.'
 *
 * Return: function has no return values
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++s;
		len++;
	}
	return (len);
}

/**
 * puts_half - output function
 *
 * @str: the input string
 *
 * Description:'Winning is only half of it. Having fun is the other half.'
 *
 * Return: function has no return values
 */
void puts_half(char *str)
{
	int st_len = _strlen(str) - 1;

	int half;

	if (st_len % 2 == 0)
		half = st_len / 2;
	else if (st_len % 2 != 0)
		half = (st_len / 2) + 1;

	while (half != st_len + 1)
	{
		putchar(str[half++]);
	}
	putchar('\n');
}

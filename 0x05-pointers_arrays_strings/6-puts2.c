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
	int st_len = _strlen(str);
	int i;

	i = 0;
	while (i <= st_len)
	{
		putchar(str[i]);
		i += 2;

	}
	putchar('\n');
}

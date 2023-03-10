#include "main.h"
/**
 *  _strlen - output function
 *
 * @cs: the input string
 *
 * Description:'Write a function that returns the length of a string.'
 *
 * Return: function has no return values
 */
int _strlen(char *cs)
{
	int len = 0;

	while (cs[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 *  print_rev - output function
 *
 * @s: the input string
 *
 * Description:'Write a function that print string follow new line.'
 *
 * Return: function has no return values
 */
void print_rev(char *s)
{
	int string_len = _strlen(s);
	/* char	reverse; */

	while (string_len)
	{
		/* reverse = s + string_len; */
		--string_len;
		_putchar(s[string_len]);
	}
	putchar('\n');
}

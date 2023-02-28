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
 * rev_string - output function
 *
 * @s: the input string
 *
 * Description:'Write a function that reverses a string.'
 *
 * Return: function has no return values
 */
void rev_string(char *s)
{
	int st_len = _strlen(s) - 1;

	char org, rev;
	int incr;

	incr = 0;
	while (incr < st_len)
	{
		org = s[st_len];
		rev = s[incr];

		*(s + incr) = org;
		*(s + st_len) = rev;
		incr++;
		st_len--;
	}
}

#include "main.h"

/**
 *  _strlen_recursion - return function
 *
 * @s:the input string
 *
 * Description:'Write a function that returns the length of a string.'
 *
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

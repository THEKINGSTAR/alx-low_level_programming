#include "main.h"

/**
 * revers - output function
 *
 * @s:the input string
 *
 * Description:'fucnction that prints a string in reverse.'
 *
 * Return: function has no return values
 */
void revers(char *s)
{
	char *ptr;

	ptr = s;
	if (*ptr != '\0')
	{
		ptr++;
		revers(ptr);
		if (*ptr != '\n')
			putchar(*ptr);
		else
			return;
	}
}

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
	/*
	 * char *ptr;
	 *
	 * ptr = s;
	 *
	 * if (*ptr != '\0')
	 * {
	 *	ptr++;
	 *	_print_rev_recursion(ptr);
	 *	putchar(*ptr);
	 *	return ;
	 *	}
	 */
	revers(s);
	putchar('\n');
}




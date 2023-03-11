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

/**
 * main - check the code
 * @argc:argc will be the number of strings
 * @argv:strings pointed to by argv
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_puts(argv[i]);
	}
	return (0);
}

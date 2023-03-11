#include "main.h"


/**
 * _puts_recursion - output function
 *
 * @s:the input string
 *
 * Description:'Write a function that print string follow new line.'
 *
 * Return: function has no return values
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
}

/**
 * main - check the code
 * @argc:argc will be the number of strings
 * @argv:strings pointed to by argv
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int size = argc;
	char *s;

	s = *(argv);
	_puts_recursion(s);
	size++;

	/* working fine now using puchar */
	/**
	 * size++;
	 * printf("%s\n",argv[0]);
	 *
	 */
	return (0);
}

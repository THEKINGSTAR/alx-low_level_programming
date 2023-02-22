#include "main.h"
/**
* print_alphabet_x10 - output function
*
* Description:'Write a function that prints 10 times the alphabet,
* in lowercase, followed by a new line.'
*
* Return: function has no return values
*/
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10 ; i++)
	{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	}
}

#include "main.h"
/**
* print_alphabet - output dunction
*
* Description:: 'functcion return the alphaet in
* *asseending order and print new line '
*
* Return: function has no return values
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

#include "main.h"
/**
* print alphabet
*
* Description: 'functcion return the alphaet in asseending order'
*
* Return: function has no return values
*/
void print_alphabet(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

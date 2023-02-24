#include "main.h"
/**
* print_numbers - output dunction
*
* Description:: 'function to print the number
* *asseending order for 0 to 9 and print new line '
*
* Return: function has no return values
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}

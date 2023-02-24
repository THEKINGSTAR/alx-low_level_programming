#include "main.h"
/**
* print_most_numbers - output dunction
*
* Description:: 'function to print the number
* *asseending order for 0 to 9 exept 2 and 4
* and print new line '
*
* Return: function has no return values
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}

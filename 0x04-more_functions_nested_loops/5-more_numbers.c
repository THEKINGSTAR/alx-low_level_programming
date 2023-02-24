#include "main.h"
/**
* print_number - output dunction
*
* Description:: 'function to print the number
* *asseending order for 0 to 14 ten times 
* and print new line '
*
* Return: function has no return values
*/
void more_numbers(void)
{
	int n;
	
	for (n = 0; n < 9; n++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
	
}

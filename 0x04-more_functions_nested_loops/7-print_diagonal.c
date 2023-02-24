#include "main.h"
/**
* print_diagonal - output dunction
*
* @n : is the number of times will print \ in diagonla
* Description:'that draws a diagonal line in the terminal'
*
* Return: function has no return values
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		int l;

		for (l = 0; l < n; l++)
		{
			int i;

			for (i = 0; i < l; i++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');

		}
	}
}

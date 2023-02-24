#include "main.h"
/**
* print_line - output dunction
*
* @n : is the number of times will print _
* Description:: 'that draws a straight line in the terminal'
*
* Return: function has no return values
*/
void print_line(int n)
{
	int l = n;

	if (l == 0)
	{
		_putchar('\n');
	}
	else if (l > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

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
	int l;

	for (l = 0; l <= n; l++)
	{
		if (l == 0)
		{
			_putchar('\n');
			continue;
		}
		_putchar('_');
	}
	_putchar('\n');
}

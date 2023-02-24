#include "main.h"
/**
* print_triangle - output dunction
*
* @size : the size of the triangle
* Description:'that prints a triangle, followed by a new line.'
*
* Return: function has no return values
*/
void print_triangle(int size)
{
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		int l;
		int i, s, p = n;

		for (l = 1; l <= n; l++)
		{

			for (i = 1; i < p; i++)
			{
				_putchar(' ');
			}
			p--;
			for (s = 0; s < l; s++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}

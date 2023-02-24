#include "main.h"
/**
* print_square- output dunction
*
* @size : Where size is the size of the square
* Description:'Write a function that prints a square, followed by a new line.'
*
* Return: function has no return values
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		int l;

		for (l = 0; l < size; l++)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}

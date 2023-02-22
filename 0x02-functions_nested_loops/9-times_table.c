#include "main.h"
/**
*  times_table- output function
*
* Description :'Write a function that prints the 9 times table, starting with 0.'
*
* Return: function has no return values
*/
void times_table(void)
{
	int ones ;

	for (ones = 0; ones < 10 ; ones++)
	{
		int tens;

		for (tens = 0 ; tens < 10 ; tens ++)
		{		
			_putchar(ones + '0');
			_putchar(tens + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

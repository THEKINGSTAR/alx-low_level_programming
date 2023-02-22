#include "main.h"
/**
*  times_table- output function
*
* Description :'Write a function that prints the 9 times table,
* starting with 0.'
*
* Return: function has no return values
*/
void times_table(void)
{
	int ones, multi;

	for (ones = 0; ones < 10; ones++)
	{
		int tens;

		for (tens = 0 ; tens < 10 ; tens++)
		{
			multi = ones * tens;
			if (multi < 10)
			{
				if (multi == 0 && (ones == 0 || tens == 0))
				{
				_putchar(multi % 10 + '0');
				if (tens < 9)
				{
					if (ones == 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
					else if (tens == 0)
					{
					_putchar(',');
					}
				}
				}
				else if (multi < 10 && tens < 9)
	                        {
                	                _putchar(' ');
					_putchar(' ');
					_putchar(multi % 10 + '0');
					_putchar(',');
        	               }
				else if (multi == 9 && tens == 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(multi % 10 + '0');
				}
			}
			else if (multi > 9)
			{
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
				 if ( tens < 9 )
				 {
        	                        _putchar(',');
			         }
			}
		}
		_putchar('\n');
	}
}

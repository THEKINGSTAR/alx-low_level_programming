#include "main.h"
/**
*jack_bauer - output dunction
*
* Description:'function that prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.'
*
* Return: function has no return values
*/
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0 ; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60 ; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');

		}
	}	
}

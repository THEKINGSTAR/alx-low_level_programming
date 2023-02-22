#include "main.h"
/**
*print_last_digit- output function
*@n: An input number
* Description:'function to print the last digit of input number'
*
* Return: function return the last digit of number
*/
int print_last_digit(int n)
{
	int j = n;

	if (j < 0)
	{
		j = -1 * (n % 10);
		_putchar(j + '0');
	}
	else
	{
		_putchar(j % 10 + '0');
	}
	return (j % 10);
}

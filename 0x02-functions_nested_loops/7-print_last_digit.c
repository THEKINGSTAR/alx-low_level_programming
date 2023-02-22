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
	if (n < 0)
		n = n * -1;
	_putchar(n % 10 + '0');
	return (n % 10);
}

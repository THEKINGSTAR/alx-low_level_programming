#include "main.h"
/**
*print_sign - output function
*@n: An input character
* Description:'function to print the sign of the numver
* is it negative or positive or equal to zero'
*
* Return: Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zerot
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
return (1);
}
else if (n < 0)
{
	_putchar('-');
return (-1);
}
else
{
	_putchar('0');
}
	return (0);
}

#include "main.h"
/**
*_isdigit - output function
*@c: An input character
* Description:'function to check if the curters is digit or not'
*
* Return: function return 1 if the character is upeercase
* * & return 0 if not
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}

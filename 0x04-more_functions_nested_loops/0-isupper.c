#include "main.h"
/**
*_isupper - output function
*@c: An input character
* Description:'function to check if the curters is upercase or not'
*
* Return: function return 1 if the character is upeercase
* * & return 0 if not
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}

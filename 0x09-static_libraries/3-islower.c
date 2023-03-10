#include "main.h"
/**
*_islower - output function
*@c: An input character
* Description:'function to check if the curters is lower or upper case'
*
* Return: function return 1 if the character is lowercase
* * & return 0 if not
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}

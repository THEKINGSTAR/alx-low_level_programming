#include "main.h"
/**
*_isalpha - output function
*@c: An input character
* Description:'function to check if the curters is alphabet or not'
*
* Return: function return 1 if the character is alphabet
* * & return 0 if not
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
else
	return (0);
}

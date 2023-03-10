#include "main.h"
/**
 * is_revers - output function
 *
 * @s:the input string
 *
 * Description:'function to compare the letters of the string.'
 *
 * Return: function return 1 if yes , 0 else
 */

int is_revers(char *s)
{
	char *ptr;
	int rslt;

	ptr = s;
	rslt = 0;
	if (*ptr == '\0')
		return (1);
	else if (*ptr != '\0')
	{
		is_revers(ptr + 1);
	}
	if (*ptr == *s++)
	{
		rslt = 1;
	}
	return (rslt);
}

/*
 * get size
 * first half size for the first compare fucn
 * second half size for the second function
 * compare if diffrient
 * return
*/


/**
 * is_palindrome - output function
 *
 * @s:the input string
 *
 * Description:'Write a function that returns 1
 * if a string is a palindrome and 0 if not.'
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	/**
	* int size ,smid, palindrome;
	* char midptr;
	* size = _strlen_recursion(s);
	* smid = size / 2;
	* midptr = *s + smid;
	* if (revers(s + smid + 1, midptr) == puts_recursion(s , midptr))
	* {
	*	palindrome = 1;
	* }
	* return (palindrome);
	*/
	return (is_revers(s));
}



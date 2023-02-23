#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"
/**
* positive_or_negative - cheknumber
* @n: 'input number'
*
* Description:'check the number
* is it positive or negatinve'
*
* Return: 'function has no return values'
*/
void positive_or_negative(int n)
{
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
}

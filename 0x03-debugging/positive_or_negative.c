#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"
/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
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

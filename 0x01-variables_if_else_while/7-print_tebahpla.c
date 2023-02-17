#include <stdio.h>
/* more headers goes there */
#include <stdio.h>
/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch = 0;
for (ch = 0 ; ch <= 25 ; ch++)
{
putchar('z' - ch);
}
ch = '\n';
putchar (ch);
return (0);
}

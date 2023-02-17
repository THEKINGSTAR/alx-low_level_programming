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
int ch;
for (ch = 0 ; ch <= 9 ; ch++)
{
ch = ch % 100;
ch = ch % 10;
putchar(ch + '0');
putchar(32);
if (ch != 9)
putchar(44);
}
ch = '\n';
putchar (ch);
return (0);
}

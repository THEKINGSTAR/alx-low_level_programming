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
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}

ch = '\n';
putchar (ch);
return (0);
}

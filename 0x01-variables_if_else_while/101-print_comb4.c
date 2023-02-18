#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch1 = 0, ch2, ch3;

for (; ch1 < 10; ch1++)
{
for (ch2 = ch1 + 1; ch2 < 10; ch2++)
{
for (ch3 = ch2 + 1; ch3 < 10; ch3++)
{
if (ch1 != ch2 || ch2 != ch3 || ch1 != ch3)
{
ch1 = ch1 % 100;
ch1 = ch1 % 10;
ch2 = ch2 % 100;
ch2 = ch2 % 10;
ch3 = ch3 % 100;
ch3 = ch3 % 10;
putchar(ch1 + '0');
putchar(ch2 + '0');
putchar(ch3 + '0');
if (ch1 == 7 && ch2 == 8)
{
if (ch3 == 9)
{
break;
}
}
else
{
putchar(44);
putchar(32);
}
}
}
}
}
ch1 = '\n';
putchar(ch1);
return (0);
}

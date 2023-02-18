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
int ch1, ch2;
for (ch1 = 0 ; ch1 <= 98; ch1++)
{
	for (ch2 = ch1 + 1 ; ch2 <= 99; ch2++)
	{
	putchar((ch1 / 10) + '0');
	putchar((ch1 % 10) + '0');
	putchar(32);
	putchar((ch2 / 10) + '0');
	putchar((ch2 % 10) + '0');
	if (ch1 == 98 && ch2 == 99)
	continue;
	putchar(44);
	putchar(32);
	}
}
putchar('\n');
return (0);
}

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
int ch1;
int ch2 ;
int jump =1;
for (ch1 = 0 ; ch1 <= 9 ; ch1++)
{
for ( ch2=jump ; ch2 <= 9 ;ch2++ )
{
	if (ch1 != ch2)
	{
	ch1 = ch1 % 100;
	ch1 = ch1 % 10;
	ch2 = ch2 % 100;
	ch2 = ch2 % 10;
	putchar(ch1 + '0');
	putchar(ch2 + '0');
 
	
	if ( (ch1 == 8)  && (ch2 == 9 ))
	{
	  break;
	}
	else
	{
	putchar(44);
	putchar(32);
	}
	
	}
	
	
 }
	jump+=1;
}

ch1 = '\n';
putchar (ch1);
return (0);
}

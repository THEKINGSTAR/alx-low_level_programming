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
    int ch1 = 0, ch2, ch3 ,ch4;

    for (; ch1 < 10; ch1++)
    {
        for ( ch2 =0; ch2 < 10; ch2++)
        {
            for (ch3=0 ; ch3 < 10; ch3++)
            {
                for (ch4=ch3+1; ch4 < 10; ch4++)
                {

                        ch1 = ch1 % 100;
                        ch1 = ch1 % 10;

                        ch2 = ch2 % 100;
                        ch2 = ch2 % 10;


                        ch3 = ch3 % 100;
                        ch3 = ch3 % 10;

                        ch4 = ch4 % 100;
                        ch4 = ch4 % 10;

                        putchar(ch1 + '0');
                        putchar(ch2 + '0');
                        
                        putchar(32);

                        putchar(ch3 + '0');
                        putchar(ch4 + '0');

                            putchar(44);
                            putchar(32);
                        
                    }
                }
           }
           
        }    
    return (0);
}

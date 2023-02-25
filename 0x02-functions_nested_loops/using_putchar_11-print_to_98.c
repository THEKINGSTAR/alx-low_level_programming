#include "main.h"
void print_to_98(int n)
{
        int i = n, tens;
        for (;i != 99;)
        {
                if (i >= 0)
                {
                        if (i >= 9)
                        {
                            if (i > 99)
                            {
                                _putchar(i / 100 +'0');
				tens = ((i /10) % 10);
				_putchar(tens + '0');
                            }
                                _putchar(i / 10 + '0');
                        }
				_putchar(i % 10 + '0');
				
				if (i > 98)
				{
					i--;
				}		
				else
				{	
					i++;
				}
                }
                else if (i < 0)
                {
                        _putchar('-');                 
                        if (i < -9)
                        {
                                if (i < -99)
                                {	_putchar(i * -1 / 100 +'0');
                                        _putchar((i * -1 /10) % 10 + '0');
                                }
                                _putchar(i * -1 / 10 + '0');
                        }
                        _putchar(i * -1 % 10 + '0');
			i++;
                }
	if (i  != 99)
        {
           _putchar(',');
        }
        if (i != 99)
	 {
		_putchar(' ');
         }
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

void revers(char *s)
{
        char *ptr ;

        ptr = s;
	if(*ptr == '\0')
		return;

	else if (*ptr !='\0' )
        {
                revers(ptr + 1);
	}
	if ( *ptr == *s++);
	{
		printf("%c",*ptr);
	}
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char string1[] = "\nHello her";
    char string2[] = "\nlevel";
	
    revers(string2);

    return (0);
}

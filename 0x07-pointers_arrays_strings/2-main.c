#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello"; 
    /* char *s =""; */
    char *f;

    f = _strchr(s, 'c');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    else 
    {
	    printf("not fund");
    }
    return (0);
}

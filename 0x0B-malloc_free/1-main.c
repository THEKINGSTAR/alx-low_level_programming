#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    char *s;

    /* s = _strdup("ALX SE"); */
    /* s =_strdup("Holberton School!"); */
     s = _strdup(""); 
    /* s = _strdup("First, solve the problem. Then, write the code."); */ 
    /* s = _strdup(""); */

    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}


/**
 * main - check the code .
 *
 * Return: Always 0.
 */
/*
int main(void)
{
	char *s;

	s = _strdup(NULL);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	free(s);
	return (0);
}
*/

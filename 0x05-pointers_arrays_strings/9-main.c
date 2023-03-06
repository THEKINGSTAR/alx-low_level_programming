#include "main.h"
#include <stdio.h>

#define LEN 4

char *_strcpy(char *dest, char *src);
void _memset(char *s, char c, int len);
void main_3(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    main_3();

    return (0);
}

void main_3(void)
{
	char cpy[LEN + 1] = {0};
        char *str;
        char *ret;

        _memset(cpy, 'H', LEN);
        str = "Z";
        ret = _strcpy(cpy, str);
        printf("%s\n%s\n%s\n", str, cpy, ret);

}

#include "main.h"

/**
 * binary_to_uint - convert fucntion
 *
 * Description:Write a function that converts a binary number to an unsigned int.
 * 
 * Prototype: unsigned int binary_to_uint(const char *b);
 *
 * @b:where b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned conv = 0;
        int l = 0, num;

        while (*(b + l) != '\0')
        {
                num = atoi((b + l));
		/* printf("%d :: %d\n" , num, conv); */
                conv += (num * (2 ^ l));
                l++;
        }
	conv = conv >> l;
        return (conv);
}

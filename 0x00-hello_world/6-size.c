#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/
int main(void)
{int integerType;
float floatType;
double doubleType;
char charType;
/*Sizeof operator is used to evaluate the size of a variable*/
printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %ld bytes(s)\n", sizeof(integerType));
printf("Size of long int: %ld bytes(s)\n", sizeof(longType));
printf("Size of long long: %lld bytes(s)\n", sizeof(longType)*2);
printf("Size of float: %ld bytes(s)\n", sizeof(floatType));
return (0);
}

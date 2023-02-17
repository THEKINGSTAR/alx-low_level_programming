#include <stdio.h>
#include <string.h>
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
printf("Size of int: %ld bytes(s)\n", sizeof(integerType));
printf("Size of float: %ld bytes(s)\n", sizeof(floatType));
printf("Size of double: %ld bytes(s)\n", sizeof(doubleType));
printf("Size of char: %ld byte(s)\n", sizeof(charType));
return (0);
}

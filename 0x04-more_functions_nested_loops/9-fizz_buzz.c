#include "main.h"
#include <stdio.h>

void fizz_buzz(void);


/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	fizz_buzz();

return (0);
}

/**
* fizz_buzz - output functon
*
* Description:'function to print prints the numbers from 1 to 100,
* followed by a new line
* But for multiples of three print Fizz instead of the number
* and for the multiples of five print Buzz. For numbers which are
* multiples of both three and five print FizzBuzz.
* *
* Return: function has no return values
*/
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", n);
		}
	}
	printf("\n");
}

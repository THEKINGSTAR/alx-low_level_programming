#include "main.h"
/**
 *  min_no_chng - output function
 *
 * @c: the input amount
 *
 * Description:'Write a program that prints the minimum number of
 * coins to make change for an amount of money.'
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * Return: he amount of cents you need to give back
 */
int min_no_chng(int c)
{
	int count;

	count = 0;
	while (c != 0)
	{
		if (c >= 25)
		{
			c -= 25;
			count++;
		}
		else if (c >= 10 && c < 25)
		{
			c -= 10;
			count++;

		}
		else if (c >= 5 && c < 10)
		{
			c -= 5;
			count++;
		}
		else if (c >= 2 && c < 5)
		{
			c -= 2;
			count++;
		}
		else if (c >= 1 && c < 2)
		{
			c -= 1;
			count++;
		}
	}
	return (count);
}

/**
 * main - check the code
 * @argc:argc will be the number of strings
 * @argv:strings pointed to by argv
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int remnd;

	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		remnd = atoi(argv[1]);
		if (remnd < 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", min_no_chng(remnd));
		}
	}
	return (0);
}

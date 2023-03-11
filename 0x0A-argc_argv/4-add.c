#include "main.h"

/**
 * main - check the code
 * @argc:argc will be the number of strings
 * @argv:strings pointed to by argv
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, sum, num;

	if (argc > 1)
	{
		sum = 0;
		for (i = 0; i < argc; i++)
		{
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (1);
	}

	return (0);
}

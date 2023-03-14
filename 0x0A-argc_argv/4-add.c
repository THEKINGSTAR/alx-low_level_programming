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
	int i, sum, num, error;

	if (argc > 1)
	{
		sum = 0;
		for (i = 0; i < argc; i++)
		{
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
		error = 0;
	}
	else if (argc == 1)
	{
		printf("0\n");
		error = 0;
	}
	else
	{
    printf("Error\n");
		error = 1;
	}

	return (error);
}

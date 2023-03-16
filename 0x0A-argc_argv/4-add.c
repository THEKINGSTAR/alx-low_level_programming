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
	int i, ac, sum, num, error;

	if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc && error != 1; i++)
		{
			ac = 0;
			while (argv[i][ac] != '\0')
			{
				if (argv[i][ac] != 32 && (argv[i][ac] < 48 || argv[i][ac] > 57))
				error = 1;
				ac++;
			}
			num = atoi(argv[i]);
			sum += num;
		}
		if (error != 1)
		{
			printf("%d\n", sum);
			error = 0;
		}
		else
		{
			printf("Error\n");
			error = 1;
		}
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

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
	int f, s;

	if (argc > 1)
	{
		if (argc != 3)
		{
			printf("Error\n");
		}
		else
		{
			f = atoi(argv[1]);
			s = atoi(argv[2]);
			printf("%d\n", s * f);
		}
	}
	return (0);
}

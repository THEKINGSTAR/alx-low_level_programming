
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code .
 *
 * @ac: Arguments counter
 * @av: Arguments array
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	int res;

	if (ac < 2)
	{
		printf("Usage: %s filename\n", av[0]);
		return (1);
	}
	 
	res = append_text_to_file(av[1], NULL);
	printf("%i\n", res);
	



	 res = append_text_to_file("textfile_0", "Best School !");
	 printf("%i\n", res);

	return (0);
}

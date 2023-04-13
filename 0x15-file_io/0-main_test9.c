#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - check the code .
 *
 * @ac: Arguments counter
 * @av: Arguments array
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;
	size_t size;
	char *file;
	int fd1, fd2;

	if (ac != 3)
	{
		printf("Usage: %s filename size_to_read\n", av[0]);
		exit(1);
	}
	fd1 = open("main_0.c", O_RDONLY);
	if (fd1 == -1)
	{
		printf("Can't open file.\n");
		return (1);
	}
	file = av[1];
	if (strcmp(file, "NULL") == 0)
		file = NULL;
	size = atoi(av[2]);
	n = read_textfile(av[1], size);
	printf("\n(printed chars: %li)\n", n);
	fd2 = open("0-read_textfile.c", O_RDONLY);
	if (fd2 == -1)
	{
		printf("Can't open file.\n");
		return (1);
	}
	if (fd2 != fd1 + 1)
	{
		printf("Stream was not closed !\n");
		return (1);
	}
	return (0);
}
/*
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
julien@ubuntu:~/0x15. File descriptors and permissions$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/0x15. File descriptors and permissions$ 
*/

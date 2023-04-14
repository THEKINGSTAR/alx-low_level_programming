#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *file_from, const char *file_to);

/**
 * append_text_to_file - reads a text file and prints
 *
 * Write a function that appends text at the end of a file.
 *
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 *
 * where
 * @file_from:is the file to copy content from
 * @file_to: is the file to append content to
 *
 * Return:1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1
 * if the file does not exist or
 * if you do not have the required permissions to write the file
 *
 *
 */
int append_text_to_file(const char *file_from, const char *file_to)
{
	int f_f = open(file_from, O_WRONLY | O_APPEND);
	int len = strlen(file_from);
	int f_t = open(file_to, O_WRONLY | O_APPEND);
	int num_written = write(f_t, file_from, len);

	/*
	 *   if file_from does not exist,
	 *   or if you can not read it,
	 *   exit with code 98 and
	 *   print Error: Can't read from file NAME_OF_THE_FILE,
	 *   followed by a new line, on the POSIX standard error
	 *  - where NAME_OF_THE_FILE is the first argument passed to your program
	 */

	if (file_from == NULL)
	{
		return (-1);
	}

	/* if file_to already exists, truncate it */
	if (access(file_from, W_OK) == -1)
	{
		printf("cant open input file\n");
		return (-1);
	}
	if (file_from == NULL)
	{
		printf("empty input file\n");
		return (1);
	}
	if (f_f == -1)
	{
		printf("cant read input file\n");
		return (-1);
	}
	/*
	 *
	 * if you can not create or if write to file_to fails,
	 * exit with code 99 and
	 * print Error: Can't write to NAME_OF_THE_FILE,
	 * followed by a new line, on the POSIX standard error
	 * - where NAME_OF_THE_FILE is the second argument passed to your program
	 */
	if (num_written != len)
	{
		close(f_f);
		return (-1);
	}
	close(f_t);
	printf("finshed good\n");
	return (1);
}

/**
 * _main - check the code
 *
 * Description:Write a program that
 * copies the content of a file to another file.
 *
 * @argc:input argements count
 * @argv:array of argement apssed to the main
 *
 * Return:Always 0.
 *
 */


int _main(int argc, char **argv)
{
	/* int res; */
	if (argc != 3)
	{
		/*
		 * exit with code 97 and
		 * print Usage: cp file_from file_to,
		 * followed by a new line, on the POSIX standard error
		 */
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		/*  dprintf(1, "Usage: cp file_from file_to\n"); */
		exit(97);
	}
	/* res = */
	append_text_to_file(argv[1], argv[2]);
	/* printf("-> %i)\n", res); */
	return (0);
}

/*****************************************************************************/
/**************************---WORKING MAIN----********************************/
/*****************************************************************************/
/**
 * main - check the code
 *
 * Description:Write a program that
 * copies the content of a file to another file.
 *
 * @argc: input argements count
 * @argv: array of argement apssed to the main
 *
 * Return:Always 0.
 *
 */
int main(int argc, char **argv)
{
	int input_fd, output_fd;
	ssize_t ret_in, ret_out;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		/*
		 * exit with code 97 and
		 * print Usage: cp file_from file_to,
		 * followed by a new line, on the POSIX standard error
		 */
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		/*  dprintf(1, "Usage: cp file_from file_to\n"); */
		exit(97);
	}

	/* Open input file for reading */
	/*
	 * if file_from does not exist,
	 * or if you can not read it,
	 * exit with code 98
	 * and
	 * print Error: Can't read from file NAME_OF_THE_FILE,
	 * followed by a new line, on the POSIX standard error
	 * where NAME_OF_THE_FILE is the first argument passed to your program
	 */
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open output file for writing */
	/*
	 * if you can not create or if write to file_to fails,
	 * exit with code 99
	 * and
	 * print Error: Can't write to NAME_OF_THE_FILE,
	 * followed by a new line, on the POSIX standard error
	 * where NAME_OF_THE_FILE is the second argument passed to your program
	 */
	output_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (output_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[3]);
		exit(99);
	}

	/*
	 * if you can not create or if write to file_to fails,
	 * exit with code 99
	 * and
	 * print Error: Can't write to NAME_OF_THE_FILE,
	 * followed by a new line, on the POSIX standard error
	 * where NAME_OF_THE_FILE is the second argument passed to your program
	 */

	/* Copy content of input file to output file */

	ret_in = read(input_fd, &buffer, BUFSIZ);
	while (ret_in > 0)
	{
		ret_out = write(output_fd, &buffer, (ssize_t) ret_in);
		if (ret_out != ret_in)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		ret_in = read(input_fd, &buffer, BUFSIZ);
	}
	/* Close input and output files */
	close(input_fd);
	close(output_fd);
	return (0);
}

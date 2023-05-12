#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFSIZE  1024
void append_text_to_file(const char *file_from, const char *file_to);
void cp(const char *f_from, const char *f_to);

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
 * Return:function hsa no return valuse but exit error conditions
 *
 */
void append_text_to_file(const char *file_from, const char *file_to)
{
	int f_f = open(file_from, O_WRONLY | O_APPEND);
	int len = strlen(file_from), num_written;
	int f_t = open(file_to, O_RDWR | O_APPEND);
	/*
	*   if file_from does not exist,
	*   or if you can not read it,
	*   exit with code 98 and
	*   print Error: Can't read from file NAME_OF_THE_FILE,
	*   followed by a new line, on the POSIX standard error
	*  - where NAME_OF_THE_FILE is the first argument passed to your program
	*/
	if (file_from == NULL || access(file_from, R_OK) != 0 ||
			access(file_from, F_OK) != 0)
	{
		printf("Can't read from file %s\n", file_from);
		exit(98);
	}
	num_written = write(f_t, file_from, len);
	close(f_f);
	close(f_t);
	/*
	 *
	 * if you can not create or if write to file_to fails,
	 * exit with code 99 and
	 * print Error: Can't write to NAME_OF_THE_FILE,
	 * followed by a new line, on the POSIX standard error
	 * - where NAME_OF_THE_FILE is the second argument passed to your program
	 */
	if (num_written < 0)
	{
		exit(99);
	}
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
	if (argc != 3)
	{
		/*
		 * exit with code 97 and
		 * print Usage: cp file_from file_to,
		 * followed by a new line, on the POSIX standard error
		 */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		/*dprintf(1, "Usage: cp file_from file_to\n");*/
		exit(97);
	}
	/* append_text_to_file(argv[1], argv[2]); */
	cp(argv[1], argv[2]);
	return (0);
}



/**
 * cp - reads a text file and prints
 *
 * Write a function that appends text at the end of a file.
 *
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 *
 * where
 * @f_f:is the file to copy content from
 * @f_t: is the file to append content to
 *
 * Return:function hsa no return valuse but exit error conditions
 *
 */
/*
 * Copy content of input file to output file
 * if you can not create or if write to file_to fails,
 * exit with code 99
 *
 * if you can not close a file descriptor,
 * exit with code 100 and
 * print Error: Can't close fd FD_VALUE,
 * followed by a new line, on the POSIX standard error
 */

void cp(const char *f_f, const char *f_t)
{
	int input_fd, output_fd;
	ssize_t ret_in, ret_out;
	char buffer[BUFFSIZE];

	input_fd = open(f_f, O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_f);
		exit(98);	}
	/* if file_to already exists, truncate it */
	output_fd = open(f_t, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (output_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_t);
		close(input_fd);
		exit(99);	}
	ret_in = read(input_fd, buffer, BUFFSIZE);
	while (ret_in > 0)
	{
		ret_out = write(output_fd, buffer, (size_t)ret_in);
		if (ret_out != ret_in)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_t);
			close(input_fd);
			close(output_fd);
			exit(99);
		}
		ret_in = read(input_fd, buffer, BUFFSIZE);
	}
	if (close(input_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fd);
		exit(100);	}
	if (close(output_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fd);
		exit(100);	}
}

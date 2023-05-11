#include "main.h"
/**
 * read_textfile - reads a text file and prints
 *
 * Write a function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 *
 * where
 * @letters: is the number of letters it should read and print
 * @filename: is the file to read from
 *
 * Return:the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int by_read, by_write;
	char *buff = malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	by_read = read(fd, buff, letters);
	if (by_read == -1)
	{
		/* free(by_read); */
		/* printf("no read!!\n"); */
		close(fd);
		return (0);
	}

	buff[by_read] = '\0';

	by_write = write(STDOUT_FILENO, buff, by_read);
	if (by_write != by_read || by_write == -1)
	{
		/* free(by_read); */
		/* free(by_write); */
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);

	return (by_read);
}

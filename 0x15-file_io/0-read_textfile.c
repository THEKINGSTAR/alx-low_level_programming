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
	FILE *file;
	char c;
	unsigned long int count = 0;

	file = fopen(filename, "r");

	if (!file || file == NULL)
	{
		return (count);
	}
	else
	{
		while ((letters-- && c != EOF) || !letters)
		{
			c = fgetc(file);
			if (c != EOF)
			{
				count++;
				printf("%c", c);
			}
		}
		fclose(file);
	}
	if (count < letters)
		return (0);
	return (count);
}

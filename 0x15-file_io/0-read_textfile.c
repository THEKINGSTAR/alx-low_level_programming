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
	int count = 0;

	file = fopen(filename, "r");

	if (!file || file == NULL)
	{
		return (count);
	}
	else
	{
		while ((letters-- > 0 && c != EOF) || !letters)
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
	return (count);
}

/**
 * _read_textfile - reads a text file and prints
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
ssize_t _read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char c;
	int count = 0;

	if (!filename)
		return (0);

	file = fopen(filename, "r");
	if (!file || file == NULL)
	{
		return (0);
	}
	else
	{
		while ((letters-- > 0 && (c = fgetc(file)) != EOF)
				|| (!c && (c = fgetc(file)) != EOF))
		{
			count++;
			printf("%c", c);
		}
		fclose(file);
	}
	return (count);
}


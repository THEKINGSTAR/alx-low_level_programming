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
	if (!file)
		return (count);
	else if (file == NULL)
	{
		return (count);
	}
	else
	{
		c = fgetc(file);
		if (c != EOF || !c)
		{
			while ((letters-- && c != EOF) || !c)
			{
				c = fgetc(file);
				if (c != EOF)
					printf("%c", c);
				count++;
			}
		}
		fclose(file);
	}
	return (count);
}

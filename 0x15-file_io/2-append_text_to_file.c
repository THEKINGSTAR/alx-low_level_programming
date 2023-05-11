#include "main.h"
/**
 * _append_text_to_file - reads a text file and prints
 *
 * Write a function that appends text at the end of a file.
 *
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 *
 * where
 * @text_content:is the NULL terminated string to add at the end of the file
 * @filename: is the file to read from
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
int _append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	char c;
	ssize_t count = 0;


	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "r");

	if (!file || file == NULL)
	{
		return (count);
	}
	else
	{
		while (c != EOF || !text_content)
		{
			c = fgetc(file);
			if (c != EOF)
			{
				count++;
			}
		}
		if (count > 0)
		{
			int fr = open(filename, O_WRONLY | O_APPEND);
			int fw = write(fr, text_content, count);

			if (!fw)
				close(fr);
		}
		fclose(file);
	}
	return (count);
}

/**
 * append_text_to_file - reads a text file and prints
 *
 * Write a function that appends text at the end of a file.
 *
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 *
 * where
 * @text_content:is the NULL terminated string to add at the end of the file
 * @filename: is the file to read from
 *
 * Return:1 on success
 * and
 * -1 on failure
 *
 * Do not create the file if it does not exist
 *
 * If filename is NULL return -1
 *
 * If text_content is NULL, do not add anything to the file.
 *
 * Return
 * 1 if the file exists
 * and
 * -1 if the file does not exist
 * or
 * -1 if you do not have the required permissions to write the file
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_hd, len, num_written;

	if (filename == NULL)
	{
		return (-1);
	}

	f_hd = open(filename, O_RDWR | O_APPEND);
	if (f_hd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(f_hd);
		return (1);
	}
	len = strlen(text_content);
	num_written = write(f_hd, text_content, len);
	close(f_hd);
	if (num_written < 0)
	{
		return (-1);
	}
	return (1);
}

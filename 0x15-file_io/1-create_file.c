#include "main.h"

/**
 * _create_file - creat file function
 *
 * Prototype: int create_file(const char *filename, char *text_content);
 *
 * where:
 * @filename: is the name of the file to create
 * and
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *
 * The created file must have those permissions:
 * rw-------.
 *
 * If the file already exists,
 *
 * do not change the permissions.
 *
 * if the file already exists, truncate it
 *
 * if filename is NULL return -1
 *
 * if text_content is NULL create an empty file
 *
 */
int _create_file(const char *filename, char *text_content)
{
	/* FILE *file; */ /* char c; */
	int count = 0;
	/*
	 * int O_WRONLY = 1, O_CREAT = 2, O_TRUNC = 3
	 *, S_IRUSR = 4, S_IWUSR = 5, S_IRGRP = 6, S_IROTH = 7;
	 */
	int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH | O_EXCL);
	if (file == -1)
	{
		count--;
		return (count);
	}
	else if (!file)
	{
		count--;
		return (count);
	}
	else
	{
		if (text_content == NULL)
		{
			dprintf(file, "%s", text_content);
		}
		else
		{
			dprintf(file, "%s", text_content);
		}
		/*
		 * while (*text_content++)
		 * { * c = fgetc(file);
		 * printf("%c", c); * }
		 */
		close(file);
		count++;
	}
	return (count);
}
/**
 * create_file - creat file function
 *
 * Prototype: int create_file(const char *filename, char *text_content);
 *
 * where:
 * @filename: is the name of the file to create
 * and
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *
 * The created file must have those permissions:
 * rw-------.
 *
 * If the file already exists,
 *
 * do not change the permissions.
 *
 * if the file already exists, truncate it
 *
 * if filename is NULL return -1
 *
 * if text_content is NULL create an empty file
 *
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
		    | S_IWUSR | S_IRGRP | S_IROTH | O_EXCL);
	if (file == -1)
	{
		count--;
		return (count);
	}
	else
	{
		if (text_content != NULL)
		{
			dprintf(file, "%s", text_content);
		}
		close(file);
		count++;
	}
	return (count);
}


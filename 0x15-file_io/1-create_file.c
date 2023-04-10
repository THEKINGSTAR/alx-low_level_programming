#include "main.h"
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
 * rw-------. If the file already exists,
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
	FILE *file;
	/* char c; */
	int count = 0;

	file = fopen(filename, "w");
	if (!file)
		return (count);
	else if (file == NULL)
	{
		count--;
		return (count);
	}
	else
	{
		fprintf(file, "%s", text_content);
		/*
		 * while (*text_content++)
		 * {
		 * c = fgetc(file);
		 * printf("%c", c);
		 * }
		 */
		fclose(file);
		count--;
	}
	return (count);
}

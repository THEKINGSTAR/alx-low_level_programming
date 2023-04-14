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
 * 
 * if file_to already exists, truncate it
 *
 * if file_from does not exist,
 * or if you can not read it,
 * exit with code 98 and
 * print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * - where NAME_OF_THE_FILE is the first argument passed to your program
 *
 * if you can not create or if write to file_to fails,
 * exit with code 99 and 
 * print Error: Can't write to NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * - where NAME_OF_THE_FILE is the second argument passed to your program
 *
 * if you can not close a file descriptor ,
 * exit with code 100 and
 * print Error: Can't close fd FD_VALUE,
 * followed by a new line, on the POSIX standard error
 * - where FD_VALUE is the value of the file descriptor
 *
 * Permissions of the created file: rw-rw-r--. 
 * If the file already exists, do not change the permissions
 *
 * You must read 1,024 bytes at a time from the file_from to make less system calls.
 * Use a buffer
 *
 * You are allowed to use dprintf
 *
 */
/**
 * main - check the code
 *
 * Write a program that copies the content of a file to another file
 *
 * Description:Write a program that copies the content of a file to another file.
 *
 * @ac: input argements count
 * @av: array of argement apssed to the main
 *
 * Return:Always 0.
 *
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
	    /*
	     * exit with code 97 and
	     * print Usage: cp file_from file_to,
	     * followed by a new line, on the POSIX standard error
	     */
        dprintf(1, "Usage: cp file_from file_to\n");
        exit(97);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
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
 * julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
 * julien@ubuntu:~/0x15. File descriptors and permissions$ cat incitatous
 * Why you should think twice before putting pictures on social media.
 * (What you always wanted to know about @Incitatous
 * #PrivacyAware
 * http://imgur.com/a/Mq1tc
 * julien@ubuntu:~/0x15. File descriptors and permissions$ ./cp incitatous Incitatous
 * julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l Incitatous
 * -rw-rw-r-- 1 julien julien 158 Dec  3 15:39 Incitatous
 * julien@ubuntu:~/0x15. File descriptors and permissions$ cat Incitatous
 * Why you should think twice before putting pictures on social media.
 * (What you always wanted to know about @Incitatous
 * #PrivacyAware
 * http://imgur.com/a/Mq1tc
 * julien@ubuntu:~/0x15. File descriptors and permissions$
 * 
 */

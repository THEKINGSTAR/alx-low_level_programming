#include  "main.h"

/**
 * _strstr - locating function
 *
 * @haystack:string to be serch in
 * @needle:string to be found
 *
 * Description:'Write a function that locates a substring.
 * The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared.'
 *
 * Return:Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	while (*needle != '\0')
	{
		ptr = haystack;
		while (*ptr)
		{
			/* printf("search for : %c   IN : %c.\n", *ptr, *haystack); */
			if (*ptr == *needle && *ptr != '\0')
			{
				return (ptr);
			}
			ptr++;
		}
		needle++;
	}
	return (ptr);
}

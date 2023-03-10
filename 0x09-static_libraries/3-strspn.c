#include  "main.h"

/**
 * _strspn - locating function
 *
 * @s:string to be serch in
 * @accept:character to be found
 *
 * Description:'Write a function that gets the length
 * of a prefix substring.'
 *
 * Return:Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	char f, *ptr;

	f = 0;
	while (*s != ',')
	{
		ptr = accept;
		while (*ptr)
		{
			/* printf("search for : %c   IN : %c.\n", *ptr, *s); */
			if (*ptr == *s && *ptr != '\0')
			{
				/* printf("Found %c  IN %c .\n",*ptr,*s); */
				f++;
			}
			ptr++;
		}
		s++;
	}
	return (f);
}

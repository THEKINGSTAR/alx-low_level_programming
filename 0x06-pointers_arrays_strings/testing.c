#include <stdio.h>
/**
 * _strncpy - output function
 *
 * @dest: the array to be copied to
 * @src: the source array to copy from
 * @n: size of n bytes of source to be copied
 *
 * Description: 'Write a function that copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest.'
 *
 * Return:  the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {

                if (src[i] > 97 && src[i] < 122)
                {
                 	dest[i] = src[i] - 32;
                }
		else
		{
                	dest[i] = src[i];
		}
        }
        for (; i < n; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}

int main(void)
{
	char str[20] = "hi Man .";

	char *p;

	p = str;

	while(*p != '\0')
	{
		if (*p > 97 && *p < 122)
		{
		 str[*(p)] = str[*(p - 32)];
		}
		*p++;

	}
	printf("%s" , str);

	char *dest;

	p =_strncpy(dest, str, 20);
	printf("%s",p);

	return 0;
}

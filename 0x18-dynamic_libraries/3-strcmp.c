#include "main.h"
/**
 *  _strcmp- output function
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Description:'Write a function that compares two strings.'
 *
 * Return:
 *• 0, if the s1 and s2 are equal;
 *
 *• a negative value if s1 is less than s2;
 *
 *• a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int i, s1v, s2v;
	int result;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	s1v = 0, s2v = 0;

	for (i = 0; i < s1_len && s1[i] != '\0'; i++)
	{
		s1v += s1[i] - ' ';
	}
	for (i = 0; i < s2_len && s2[i] != '\0'; i++)
	{
		s2v += s2[i] - ' ';
	}
	if (s1v == s2v)
		result = 0;
	else if (s1v > s2v)
		result = (*s1 - *s2);
	else if (s1v < s2v)
		result = (*s1 - *s2);
	/**
	 * printf("%i\n",s1v);
	 * printf("%i\n",s2v);
	 */

	return (result);
}

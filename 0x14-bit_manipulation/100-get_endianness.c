#include "main.h"

/**
 * get_endianness - return function
 *
 * Prototype: int get_endianness(void);
 *
 * Description:Write a function that checks the endianness.
 *
 * Return:0 if big endian, 1 if little endian
 *
 * int x = 0x76543210;
 *
 * char *c = (char*) &x;
 *
 *
 * Big endian format:
 * ------------------
 *  Byte address  | 0x01 | 0x02 | 0x03 | 0x04 |
 *                +++++++++++++++++++++++++++++
 *  Byte content  | 0x76 | 0x54 | 0x32 | 0x10 |
 *
 *
 * Little endian format:
 *  ---------------------
 *  Byte address  | 0x01 | 0x02 | 0x03 | 0x04 |
 *                +++++++++++++++++++++++++++++
 *  Byte content  | 0x10 | 0x32 | 0x54 | 0x76 |
 *
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;
	int ind;

	if (*c == 0x10)
	{
		ind = 1;
	}
	else
	{
		ind = 0;
	}
	return (ind);
}

#include  "main.h"


/**
 * print_chessboard - print functon
 *
 * @a:chess board
 *
 * Description:'fuction to print chess board'
 *
 * Return:function has no return value
 *
 */


void print_chessboard(char (*a)[8])
{
	int r, i;
	char itm;

	r = 0;
	while (r < 8)
	{
		for (i = 0; i < 8 ; i++)
		{
			itm = a[r][i];
			_putchar(itm);
		}
		_putchar('\n');
		r++;
	}
}

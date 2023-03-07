#include  "main.h"


/**
 * print_diagsums - print functon
 *
 * @a: square matrix
 * @size: size of the matrix
 *
 * Description:'fuction to  prints the sum of the two diagonals
 * of a square matrix of integers.'
 *
 * Return:function has no return value
 *
 */


void print_diagsums(int *a, int size)
{
	int r, c = 1, rinc = size, linc = size;
	int rdiag, ldiag;


	rdiag = 0, ldiag = 0;
	for (r = 0; r < size; r++)
	{
		rdiag += *(a + ((rinc * r) + r));
		ldiag += *(a + ((linc * r) + linc - c));
		c++;
	}
	printf("%i, %i\n", rdiag, ldiag);
}

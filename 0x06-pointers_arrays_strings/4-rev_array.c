#include "main.h"

/**
 * reverse_array - return function
 *
 * @a : input array
 * @n : size of the array
 *
 * Description : 'function that reverse the array'
 *
 * Return : return the array reversed
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n)
	{
		tmp = a[i];
		n--;
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}

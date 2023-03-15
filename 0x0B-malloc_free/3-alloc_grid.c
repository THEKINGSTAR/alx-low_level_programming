#include "main.h"

/**
 * alloc_grid - print gird
 *
 * @width: the the char to fil the array with
 * @height:the size of the memory to creat the array with
 *
 * Description:'Write a function that returns a pointer to
 * a 2 dimensional array of integers.'
 * Each element of the grid should be initialized to 0
 *
 * Return:The function should return NULL on failure.
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr, w;

	if (!(width <= 0) || !(height <= 0))
	{
		ptr = (int **)malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
		{
			ptr[w] = (int *)malloc(sizeof(int) * height);
		}
		return (ptr);
		free(ptr);
	}
	return (NULL);
}

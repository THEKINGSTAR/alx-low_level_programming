#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h : passed list
 * Description:Write a function that returns
 * the number of elements in a linked list_t list.
 *
 * Return: the number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}

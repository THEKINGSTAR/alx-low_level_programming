#include "lists.h"

/**
 * list_len - function to return the list lenght
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

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		size++;
	}
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				return (size++);
			}
			else
			{
				size++;
			}
			h = h->next;
		}
	}
	return (size);
}

#include "lists.h"



/**
 * dlistint_len - return lenght function
 *
 * @h: pointer to the list
 * Write a function that returns
 * the number of elements in a linked dlistint_t list.
 * Return: the number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t lenght = 0;

	current = h;
	while (current != NULL)
	{
		lenght++;
		current = current->next;
	}
	return (lenght);
}

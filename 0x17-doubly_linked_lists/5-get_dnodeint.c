#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index function
 *
 * @head: head of the list
 * @index: index to get the node at
 *
 * where index is the index of the node, starting from 0
 *
 * Return:nth node.
 * if the node does not exist, return NULL
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int lenght = 0;

	current = head;
	if (index == 0)
		return (current);

	while (current != NULL)
	{
		current = current->next;
		lenght++;
	}
	if ((index > lenght) || (!index))
		return (NULL);

	current = head;

	while (index)
	{
		current = current->next;
		index--;
	}
	return (current);
}

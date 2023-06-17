#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index function
 *
 * @h: head of the list
 * @idx: index to isert the node at
 * @n: value to assign node
 *
 * where idx is the index of the list where the new node should be added.
 * Index starts at 0
 * Return: the address of the new node,
 * or
 * NULL if it failed
 *
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;/*, *prev_node;*/
	int lenght = 0, index = idx;

	current = *h;
	new_node = NULL;
	while (current != NULL)
	{	current = current->next;
		lenght++;	}
	if ((index > lenght) || (!index))
		return (NULL);
	current = *h;
	while (index - 1)
	{	current = current->next;
		index--;	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{	*h = new_node;
		return (new_node);	}
	if (idx == 0)
	{	new_node->prev = NULL;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
	}
	else
	{	new_node->prev = current;
		new_node->next = current->next;
		current->next = new_node;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
	}
	return (new_node);
}

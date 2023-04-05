#include "lists.h"

/**
 * insert_nodeint_at_index - return function
 *
 * Description: Write a function that inserts a new node at a given position.
 * where idx is the index of the list where the new node should be added.
 * Index starts at 0
 *
 * Prototype:
 * tint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
 *
 * @head: input list structure
 * @idx: the index to return the node at
 * @n: the number to be interd
 *
 * Return:the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ind = 0;
	listint_t *current, *new;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		current = *head;
		while (ind < idx - 1)
		{
			current = current->next;
			ind++;
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			new->next = current->next;
			new->n = n;
			current->next = new;
		}
	}
	return (new);
}

#include "lists.h"

/**
 *  delete_dnodeint_at_index - function that deletes the node at index.
 *
 * @head: head of the list
 * @index: index to isert the node at
 *
 * where index is the index of the node that
 * should be deleted. Index starts at 0
 *
 * Returns: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev_node, *del_node;
	int lenght = 0, idx = index, status = -1;

	current = *head;
	
	while (current != NULL)
	{
		current = current->next;
		lenght++;
	}
	if ((idx > lenght) || (!index))
		return (status);

	current = *head;
	while (idx--)
	{
		current = current->next;
	}
	

	free(del_node);
	status = 1;
	

	return (status);
}

#include "lists.h"

/**
 * get_nodeint_at_index - return function
 *
 * Description: Write a function that
 * returns the nth node of a listint_t linked list.
 * where index is the index of the node, starting at 0
 *
 * Prototype : listint_len(const listint_t *h);
 *
 * @head: input list structure
 * @index: the index to return the node at
 *
 * Return: if the node does not exist, return NULL
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		current = head;
		while (ind < index)
		{
			current = current->next;
			if (current != NULL)
			{
				ind++;
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (current);
}

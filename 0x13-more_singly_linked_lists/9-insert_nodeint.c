#include "lists.h"

/**
 * listint_len - print function
 *
 * Description: Write a function that returns the number
 * of elements in a linked listint_t list.
 *
 * Prototype : listint_len(const listint_t *h);
 *
 * @h: input list structure
 *
 * Return: the number of elements
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

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
	unsigned int ind = 0, len;
	listint_t *current, *new;

	len = listint_len(*head);
	if (*head == NULL)
	{
		return (NULL);
	}
	else if (idx <= len + 1)
	{
		current = *head;
		while (ind != idx - 1)
		{
			if (current != NULL)
			{
				current = current->next;
				ind++;
			}
			else if (current == NULL && ind < idx)
			{
				return (NULL);
			}
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		else
		{
			new->next = current->next;
			new->n = n;
			current->next = new;
			return (new);
		}
		free(new);
	}
	return (NULL);
}

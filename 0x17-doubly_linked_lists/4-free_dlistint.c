#include "lists.h"

/**
 * free_dlistint - free node functions
 *
 * @head: pointer to the list
 * Write a function that frees a dlistint_t list.
 * Prototype: void free_dlistint(dlistint_t *head);
 * Return: function has no return value
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *prev_n;

	prev_n = NULL;
	current = head;

	while (current != NULL)
	{
		prev_n = current;
		current = current->next;
		prev_n->next = current;
		prev_n->prev = NULL;
		free(prev_n);
	}
	free(current);
}

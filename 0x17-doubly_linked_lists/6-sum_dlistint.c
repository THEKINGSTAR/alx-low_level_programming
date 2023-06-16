#include "lists.h"

/**
 *  sum_dlistint- get node at index function
 *
 * @head: head of the list
 * Write a function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 * Prototype: int sum_dlistint(dlistint_t *head);
 *
 * Return:the sum of all the data (n) of a dlistint_t linked list.
 * if the list is empty, return 0
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	if (head == NULL)
		return (sum);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

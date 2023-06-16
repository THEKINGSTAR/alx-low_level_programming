#include "lists.h"



/**
 * sum_dlistint - return lenght function
 *
 * @head: pointer to the list
 *
 * Write a function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * Prototype: int sum_dlistint(dlistint_t *head);
 *
 * Return:the sum  sum of all the data (n) of linked list.
 * if the list is empty * Return 0
 *
 */

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *current;
	size_t sum = 0;

	current = h;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

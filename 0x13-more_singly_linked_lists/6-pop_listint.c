#include "lists.h"

/**
 * pop_listint - count function
 *
 * Description: Write a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n)..
 *
 * Prototype: int pop_listint(listint_t **head);
 *
 * @head: input list structure
 *
 * Return:the head node’s data (n).if the linked list is empty return 0
 *
 *
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *end;

	if (*head == NULL)
	{
		return (n);
	}
	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		free(end);
		return (n);
	}
	else if (end != NULL)
	{
		end->next = (*head)->next;
		end->n = (*head)->n;
		n = (*head)->n;
		*head = end;
	}
	return (n);
}

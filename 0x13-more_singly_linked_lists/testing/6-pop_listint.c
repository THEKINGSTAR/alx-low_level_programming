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
	listint_t *nhd;

	if (*head == NULL)
	{
		return (n);
	}
	else if (*head != NULL)
	{
		nhd = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = nhd;
	}
	return (n);
}

#include "lists.h"

/**
 * free_listint - count function
 *
 * Description:Write a function that frees a listint_t list.
 *
 * Prototype: void free_listint(listint_t *head);
 *
 * @head: input list structure
 *
 * Return: the function has no return value
 *
 *
 */
void free_listint(listint_t *head)
{
	 listint_t *end, *current;

	if (head == NULL)
	{
		return;
	}

	end = head;
	while (end->next != NULL)
	{
		current = end;
		end = end->next;
		head = current;
		free(head);
	}
	free(end);
}

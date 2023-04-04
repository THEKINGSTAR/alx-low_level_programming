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
	listint_t *end, *current;
	
	end = malloc(sizeof(listint_t));
	
	if (end == NULL)
	{
		free(end);
		return (0);
	}
	else if (end != NULL)
	{
		end->n = n;
		end->next = NULL;

		if (*head == NULL)
		{
			*head = end;
		}
		else
		{
			current = *head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = end;
		}
	}
	end = *head;
	return (end->n);
}

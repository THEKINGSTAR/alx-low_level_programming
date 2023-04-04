#include "lists.h"

/**
 * listint_t *add_nodeint_end - count function
 *
 * Description: Write a function that adds
 * a new node at the end of a listint_t list.
 *
 * Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
 *
 * @head: input list structure
 * @n: the cont
 *
 * Return: the address of the new element, or NULL if it failed
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *end, *current;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
	{
		free(end);
		return (NULL);
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
	return (end);
}

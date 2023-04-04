#include "lists.h"

/**
 * listint_t *add_nodeint - count function
 *
 * Description: Write a function that adds
 * a new node at the beginning of a listint_t list.
 *
 * Prototype : listint_len(const listint_t *h);
 *
 * @head: input list structure
 * @n: the cont
 *
 * Return: the address of the new element, or NULL if it failed
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *add;

	add = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		add = NULL;
		return (add);
	}
	else if (head != NULL)
	{
		if (add == NULL)
		{
			return (add);
		}
		else
		{
			add->n = n;
			add->next = *head;
			*head = add;
		}
	}
	return (add);
}

#include "lists.h"

/**
 *  add_dnodeint_end - add node function at end
 *
 * @head: pointer to the list
 * @n: the value in the inserted node
 *
 * Write a function that adds a new node at the beginning of a dlistint_t list.
 * dlistint_t *add_dnodeint(dlistint_t **head, const int n);
 * Return: the address of the new element,
 * or
 * NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}


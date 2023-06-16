#include "lists.h"



/**
 *  add_dnodeint - add node function
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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);


	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;


	free(new_node);
	return ((*head));
}

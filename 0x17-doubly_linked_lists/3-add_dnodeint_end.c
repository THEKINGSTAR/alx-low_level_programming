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
	const dlistint_t *current;

	current->next = head;
	current->prev = NULL;
	current->n = n;
	return (current);
}

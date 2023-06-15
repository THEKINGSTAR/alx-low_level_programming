#include "lists.h"



/**
 * print_dlistint - print return function
 *
 * @h: pointer to the list
 * Write a function that prints all the elements of a dlistint_t list.
 * Prototype: size_t print_dlistint(const dlistint_t *h);
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t lenght = 0;

	current = h;
	while (current != NULL)
	{
		lenght++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (lenght);
}

#include "lists.h"

/**
 * print_listint - print function
 *
 * Description: Write a function that prints all the elements
 * of a listint_t list.
 *
 * Prototype : size_t print_listint(const listint_t *h);
 *
 * @h: input list structure
 *
 * Return: the number of nodes
 *
 * Format : see example
 * You are allowed to use printf
 *
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

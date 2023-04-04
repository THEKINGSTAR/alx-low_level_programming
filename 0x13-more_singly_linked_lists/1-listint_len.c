#include "lists.h"

/**
 * listint_len - print function
 *
 * Description: Write a function that returns the number
 * of elements in a linked listint_t list.
 *
 * Prototype : listint_len(const listint_t *h);
 *
 * @h: input list structure
 *
 * Return: the number of elements
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

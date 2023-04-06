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
/**
 * get_nodeint_at_index - return function
 *
 * Description: Write a function that
 * returns the nth node of a listint_t linked list.
 * where index is the index of the node, starting at 0
 *
 * Prototype : listint_len(const listint_t *h);
 *
 * @head: input list structure
 * @index: the index to return the node at
 *
 * Return: if the node does not exist, return NULL
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0, len;

	listint_t *current;

	len = listint_len(head);
	if (index > len)
		return (NULL);

	current = head;
	while (ind < index)
	{
		current = current->next;
		ind++;
	}
	return (current);
}

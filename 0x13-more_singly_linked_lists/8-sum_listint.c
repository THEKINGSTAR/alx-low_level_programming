#include "lists.h"

/**
 *  sum_listint - sum function
 *
 * Description: Write a function that
 * returns the sum of all the data (n) of a listint_t linked list.
 *
 * Prototype : size_t print_listint(const listint_t *h);
 *
 * @head: input list structure
 *
 * Return: if the list is empty, return 0
 *
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
		while (head != NULL)
		{
			if (head->n != '\0')
			{
				sum += head->n;
			}
			head = head->next;
		}
	}
	return (sum);
}

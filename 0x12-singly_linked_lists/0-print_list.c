#include "lists.h"

/**
 * print_list - function to print the list
 * @head : passed list
 * Description:Write a function that prints all the elements of a list_t list.
 *
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 *
 * Return: the number of nodes
 *
 */

size_t print_list(const list_t *head)
{
	int size = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
			size++;
		}
		else
		{
			printf("[%i] %s\n", head->len, head->str);
			size++;
		}
		head = head->next;
	}
	return (size);
}

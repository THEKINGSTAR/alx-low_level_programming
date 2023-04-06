#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
/*
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
*/


/*********************************************************************************************/

/**
 * _create_list - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
listint_t *_create_list(unsigned int n, ...)
{
	va_list args;
	listint_t *list;
	listint_t *tmp;
	listint_t *prev;
	unsigned int i;
	int nb;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		nb = va_arg(args, int);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->n = nb;
		tmp->next = NULL;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * _free_listint - Free a list
 *
 * @list: A pointer to the first element of a list to free
 */
void _free_listint(listint_t *list)
{
	if (list)
	{
		_free_listint(list->next);
		free(list);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *n;

	head = _create_list(1, 9);
	n = insert_nodeint_at_index(&head, 10, 98);
	if (n)
		printf("-> %d\n", n->n);
	else
		printf("(nil)\n");
	print_listint(head);
	_free_listint(head);
	return (0);
}

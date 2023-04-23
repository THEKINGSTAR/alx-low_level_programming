#include "lists.h"

/**
 * add_node_end - function to add node at the begging of list
 * @head : passed list head node
 * @str : the string to put in the node
 *
 * Description:Write a function that adds
 * a new node at the end of a list_t list.
 * str needs to be duplicated
 * You are allowed to use strdup
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0, length = 0;
	list_t *new, *current_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{ return (NULL); }
	else
	{
		while (str[length] != '\0')
		{
			length++;
		}
		new->str = malloc(sizeof(char) * (length + 1));

		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		while (i < length)
		{
			new->str[i] = str[i];
			i++;
		}
		new->str[length] = '\0';
		new->len = length, new->next = NULL;
		if (*head == NULL)
		{ *head = new; }
		else
		{
			current_node = *head;
			while (current_node->next != NULL)
			{
				current_node = current_node->next;
			}
			current_node->next = new;
		}
	}
	return (new);
    free (new);
}

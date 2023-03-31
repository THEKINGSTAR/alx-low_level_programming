#include "lists.h"

/**
 * add_node - function to add node at the begging of list
 * @head : passed list head node
 * @str : the string to put in the node
 *
 * Description:Write a function that adds
 * a new node at the beginning of a list_t list.
 * str needs to be duplicated
 * You are allowed to use strdup
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Count the length of the input string */
		int length = 0;

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
		new->len = length;
		new->next = *head;
		*head = new;
	}
	return (new);
}

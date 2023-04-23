#include "lists.h"

/**
 * free_list - function to free alocated memory
 *
 * @head : passed list head node
 *
 * Description:Write a function that frees a list_t list.
 *
 * Return: function has no return values
 *
 */
void free_list(list_t *head)
{
	list_t *current_node, *preview_noed;
	
	if (head == NULL)
		return;
	
	current_node = head;
	while (current_node->next != NULL)
	{
		preview_noed = current_node;
		current_node = current_node->next;
		head = preview_noed;
		free(head->str);
		free(head);
	}
	free(current_node->str);
	free(current_node);
}

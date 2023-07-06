#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_create - Write a function that creates a hash table.
 *
 * Prototype: hash_table_t *hash_table_create(unsigned long int size);
 *
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */



hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_tb;
	unsigned long int i = size;

	hs_tb = malloc(sizeof(hash_table_t));
	if (hs_tb == NULL)
		return (NULL);

	hs_tb->size = size;
	hs_tb->array = malloc(sizeof(hash_node_t) * size);
	if (hs_tb->array == NULL)
	{
		free(hs_tb);
		return (NULL);
	}
	while (i < size)
	{
		hs_tb->array[i] = NULL;
		i++;
	}
	return (hs_tb);
}

#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *hash_table_create - Write a function that creates a hash table
 * @size: unsigned long int size of array
 * Return: a pointer to the newly created hash table
 * else return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int i;

	t = malloc(sizeof(hash_table_t));

	if (t == NULL)
	{
		return (NULL);
	}

	t->size = size;
	t->array = malloc(sizeof(struct hash_node_t *) * size);

	if (t->array == NULL)
	free(t);
	return (NULL);

	for (i = 0; i < size; i++)
		t->array[i] = NULL;

	return (t);
}

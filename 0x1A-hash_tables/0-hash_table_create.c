#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table to be created
 * Return: returns a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t));
	if (new_hash_table->array == NULL)
		return (NULL);
	while (i < new_hash_table->size)
	{
		new_hash_table->array[i] = NULL;
		i++;
	}
	return (new_hash_table);
}

#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table to be created
 * Return: returns a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = (hash_node_t **) calloc(sizeof(hash_node_t), size);
	if (new_hash_table->array == NULL)
		return (NULL);
	return (new_hash_table);
}

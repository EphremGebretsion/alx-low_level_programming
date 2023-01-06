#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - finds the value of the corsponding key
 * @ht: the hash table to get the value from
 * @key: the key to find the value
 * Return: returns the value if found else return NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	if (ht->size == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}

#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * create_new_node - creates a new hash node
 * @key: the key value
 * @value: the cotent
 * Return: returns the new node or else return NULL
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *)malloc((strlen(key) + 1) * sizeof(char));
	new_node->value = (char *)malloc((strlen(value) + 1) * sizeof(char));
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return (new_node);
}
/**
 * hash_table_set - adds a new element to the hash table
 * @ht: the hash table where the new element is going to be
 * @key: the key value of the element
 * @value: the content of the element
 * Return: returns 1 on success else returns 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = create_new_node(key, value);
		if (ht->array[idx] == NULL)
			return (0);
		return (1);
	}
	temp = ht->array[idx];
	while (temp)
	{
		temp = temp->next;
		if (temp != NULL)
		{
			temp = create_new_node(key, value);
			break;
		}
	}
	if (temp == NULL)
		return (0);
	return (1);
}

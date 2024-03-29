#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * key_exist - checks if the given indx already exist in the hash node
 * @hn: the hash node eing checked
 * @key: the key being searched
 * Return: returns the node if found else return NULL
 */
hash_node_t *key_exist(hash_node_t *hn, char *key)
{
	hash_node_t *temp = hn;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
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
	if (new_node->key == NULL)
		return (NULL);
	new_node->value = (char *)malloc((strlen(value) + 1) * sizeof(char));
	if (new_node->value == NULL)
		return (NULL);
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
	if (key == NULL || strlen(key) == 0 || ht->size == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = create_new_node(key, value);
		if (ht->array[idx] == NULL)
			return (0);
		return (1);
	}
	temp = key_exist(ht->array[idx], (char *)key);
	if (temp)
	{
		temp->value = (char *)value;
		return (1);
	}
	temp = create_new_node(key, value);
	if (temp == NULL)
		return (0);
	temp->next = ht->array[idx];
	ht->array[idx] = temp;
	return (1);
}

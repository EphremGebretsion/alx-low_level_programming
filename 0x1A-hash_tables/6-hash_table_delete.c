#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_node_delete - deletes the hash node
 * @hn: the hash node being deleted
 */
void hash_node_delete(hash_node_t *hn)
{
	hash_node_t *temp = hn, *fr;

	while (temp)
	{
		fr = temp;
		free(temp->key);
		free(temp->value);
		printf("freed \n");
		temp = temp->next;
		if (fr == temp)
			printf("they are equal\n");
		else
			printf("not equal\n");
		printf("move to the next\n");
		free(fr);
	}
}
/**
 * hash_table_delete - deletes the whole hash table from memory
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i])
			hash_node_delete(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
	printf("ht freed\n");
}

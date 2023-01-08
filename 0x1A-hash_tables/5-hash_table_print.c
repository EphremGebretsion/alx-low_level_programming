#include "hash_tables.h"
#include <stdio.h>

/**
 * print_hash_node - prints a hash node
 * @hn: the hash node being printed
 * @n: checks if there is a node printed before or not (1 or 0)
 * Return: returns 1 after all print
 */
unsigned int print_hash_node(hash_node_t *hn, unsigned int n)
{
	hash_node_t *temp = hn;

	while (temp)
	{
		if (n)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		n = 1;
		temp = temp->next;
	}
	return (1);
}
/**
 * hash_table_print - prints elements inside hash table in order
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, n = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
			n = print_hash_node(ht->array[i], n);
		i++;
	}
	printf("}\n");
}

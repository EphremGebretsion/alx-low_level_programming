#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specified index
 * @head: the dead of the linked list
 * @idx: the index of the new node
 * @n: the number value
 * Return: return the address of the new node added else return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (idx == 0)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = t;
		*head = temp;
		return (temp);
	}
	while (i != (idx - 1) && t != NULL)
	{
		i++;
		t = t->next;
	}
	if (i == (idx - 1) && t != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = t->next;
		t->next = temp;
		return (temp);
	}
	return (NULL);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: the head of the list
 * @idx: index for where the new node should reside
 * @n: the node element stored number
 * Return: the address of the new node of NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *indx = *h;
	dlistint_t *new_prev;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (*h);
	}
	while (i < idx && indx)
	{
		new_prev = indx;
		i++;
		indx = indx->next;
	}
	if (i == idx)
	{
		if (indx)
		{
			new_node->next = indx;
			new_node->prev = indx->prev;
			(indx->prev)->next = new_node;
			indx->prev = new_node;
		}
		else
		{
			new_node->next = indx;
			new_node->prev = new_prev;
			new_prev->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}

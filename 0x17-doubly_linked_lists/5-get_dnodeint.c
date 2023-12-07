#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at the given index
 * @head: the head of the list
 * @index: the index to find the node
 * Return: return the node at the index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *indx = head;

	while (i < index && indx)
	{
		indx = indx->next;
		i++;
	}
	if (i == index && indx)
		return (indx);
	return (NULL);
}

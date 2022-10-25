#include "lists.h"

/**
 * get_nodeint_at_index - find the node at the ginven index
 * @head: the head of the linked list
 * @index: the index of the node
 * Return: return the node if found else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (i != index && t != NULL)
	{
		t = t->next;
		i++;
	}
	if (t == NULL)
		return (NULL);
	return (t);
}

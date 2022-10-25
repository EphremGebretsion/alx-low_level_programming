#include "lists.h"

/**
 * listint_len - count the number of nodes
 * @h: the head node
 * Return: return the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	listint_t *t = (listint_t *)h;

	while (t != NULL)
	{
		count++;
		t = t->next;
	}
	return (count);
}

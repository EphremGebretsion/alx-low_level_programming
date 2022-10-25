#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a list
 * @h: the head node
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	listint_t *t = (listint_t *)h;

	while (t != NULL)
	{
		printf("%d\n", t->n);
		count++;
		t = t->next;
	}

	return (count);
}

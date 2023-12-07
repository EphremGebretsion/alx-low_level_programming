#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the intger value stored in the list
 * @h: the head of the list
 * Return: return the number of eleents
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *indx = (dlistint_t *)h;

	while (indx != NULL)
	{
		printf("%d\n", indx->n);
		count++;
		indx = indx->next;
	}

	return (count);
}

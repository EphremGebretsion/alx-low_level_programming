#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the list
 * @h: the header of the list
 * Return: returns the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *indx = (dlistint_t *)h;
	size_t count = 0;

	while (indx != NULL)
	{
		count++;
		indx = indx->next;
	}
	return (count);
}

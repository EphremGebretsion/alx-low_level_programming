#include "lists.h"

/**
 * sum_dlistint - adds all the values of the list
 * @head: the head of the list
 * Return: returns the sum of all the numbers in the list or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *indx = head;

	if (head == NULL)
		return (0);
	while (indx)
	{
		sum += indx->n;
		indx = indx->next;
	}
	return (sum);
}

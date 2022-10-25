#include "lists.h"

/**
 * sum_listint - adds all the elemets of the linked list
 * @head: the head of the linked list
 * Return: returns the sum of the numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t != NULL)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}

#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint - pops the head of the linked list
 * @head: address of the head pointer to the linked list
 * Return: the head value
 */
int pop_listint(listint_t **head)
{
	litsint_t *t = *head;
	int n = t->n;

	if (t == NULL)
		return (0);
	*head = t->next;
	free(t);
	return (n);
}

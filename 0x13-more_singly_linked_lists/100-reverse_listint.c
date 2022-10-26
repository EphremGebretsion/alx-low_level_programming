#include <stdlib.h>
#include "lists.h"
/**
 * add_nodebeg - adds a new node infront of the current head
 * @head: address of the head pointer value
 * @n: the value of the intiger value
 * Return: the new head value
 */

listint_t *add_nodebeg(listint_t **head, const int n)
{
	listint_t *t = malloc(sizeof(listint_t));

	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = *head;
	*head = t;
	return (t);
}

/**
 * reverse_listint - rerse the linked list
 * @head: the head of the linked list
 * Return: return the head of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t = NULL;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		add_nodebeg(&t, temp->n);
		temp = temp->next;
	}
	*head = t;
	return (t);
}

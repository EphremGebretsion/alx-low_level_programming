#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - rerse the linked list
 * @head: the head of the linked list
 * Return: return the head of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t = head;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		add_nodeint(&t, temp->n);
		temp = temp->next;
	}
	return (t);
}

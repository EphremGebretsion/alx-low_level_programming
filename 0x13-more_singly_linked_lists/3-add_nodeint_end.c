#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: address of the head pointer
 * @n: the new number value to be added
 * Return: the last node address ot NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = *head;
	listint_t *temp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		*head->n = n;
		*head->next = NULL;
		return (*head);
	}
	while (t->next != NULL)
	{
		t = t->next;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	t->next = temp;
	temp->n = n;
	temp->next = NULL;
	return (temp);
}

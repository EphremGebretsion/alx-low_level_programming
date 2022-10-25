#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the linked list and set the head to NULL
 * @head: the address of the head pointer to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *t = *head;
	listint_t *temp = NULL;

	while (t != NULL)
	{
		temp = t;
		t = t->next;
		free(temp);
	}
	t = NULL;
	temp = NULL;
	*head = NULL;
}

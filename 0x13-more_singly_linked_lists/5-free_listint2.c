#include<stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the linked list and set the head to NULL
 * @head: the head of the linked list
 * Return: nothing
 */
void free_listint2(listint_t *head)
{
	listint_t *t = head;
	listint_t *temp;

	while (t != NULL)
	{
		temp = t;
		t = t->next;
		free(temp);
	}
	*head = NULL;
}

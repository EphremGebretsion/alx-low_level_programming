#include<stdlib.h>
#include "lists.h"

/**
 * free_listint - frees each elements of the linked list
 * @head: the head of the liked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint *t = head;
	listint *temp;

	while (t != NULL)
	{
		temp = t;
		t = t->next;
		free(temp);
	}
}

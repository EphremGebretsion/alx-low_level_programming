#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a specific index
 * @head: the head of the linked list
 * @index: the index of the node being deleted
 * Return: returns 1 if it succceded else return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = t->next;
		free(t);
		*head = temp;
		return (1);
	}
	while (i != (index - 1) && t != NULL)
	{
		i++;
		t = t->next;
	}
	if (i == (index - 1) && t != NULL)
	{
		temp = t->next;
		if (temp == NULL)
			return (-1);
		t->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}

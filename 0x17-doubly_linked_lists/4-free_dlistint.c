#include "lists.h"

/**
 * free_dlistint - free the list from the memory
 * @head: the head of the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free;
	dlistint_t *indx = head;

	while (indx)
	{
		to_free = indx;
		indx = to_free->next;
		free(to_free);
	}
}

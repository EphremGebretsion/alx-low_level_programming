#include "lists.h"

/**
 * add_dnodeint_end - adds a new node element at the end of the list
 * @head: the address to the head pointer
 * @n: the new value
 * Return: returns the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *indx = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (indx->next != NULL)
		{
		indx = indx->next;
		}
		new_node->prev = indx;
		indx->next = new_node;
	}
	return (new_node);
}

#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node infront of the current head
 * @head: address of the head pointer value
 * @n: the value of the intiger value
 * Return: the new head value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t = malloc(sizeof(listint_t));

	t->n = n;
	t->next = *head;
	*head = t;
	return (t);
}

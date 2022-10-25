#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in the lists
 * @h: the head of the list
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *t;
	char *s;
	unsigned int l;

	if (h != NULL)
	{
		t = (list_t *)h;
		do {
			l = t->len;
			s = t->str;
			if (s == NULL)
			{
				s = "(nil)";
				l = 0;
			}
			printf("[%lu] %s\n", l, s);
			count++;
			t = t->next;
		} while (t != NULL);
	}
	return (count);
}

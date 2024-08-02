#include "lists.h"

/**
 * list_len - length of the linked list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int k;

	if (h == NULL)
	return (0);

	for (k = 1 ; h->next != NULL ; k++)
		h = h->next;
	return (k);
}

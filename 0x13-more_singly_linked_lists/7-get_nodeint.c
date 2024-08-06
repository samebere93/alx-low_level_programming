#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: pointer to the first element of the list
 * @index: node desired position to retrieve
 * Return: pointer to the retrieved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

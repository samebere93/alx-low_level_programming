#include "lists.h"

/**
 * free_listint2 - Function that frees a singly linked list
 * set header to NULL
 * @head: pointer to the first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}

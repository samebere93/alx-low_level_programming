#include "lists.h"

/**
 * free_listint - function that free a singly linked list
 * @head: pointer to the header node
 * Return: No return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

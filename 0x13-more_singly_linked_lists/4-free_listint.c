#include "lists.h"

/**
 * free_listint - frees a `listint_t` list
 * @head: head of linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}


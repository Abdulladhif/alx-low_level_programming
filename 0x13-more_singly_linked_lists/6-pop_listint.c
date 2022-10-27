#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t` linked list
 * @head: double pointer to head
 *
 * Return: head nodes data
 *	or 0 if linked list is  empty
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node_data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (node_data);
}

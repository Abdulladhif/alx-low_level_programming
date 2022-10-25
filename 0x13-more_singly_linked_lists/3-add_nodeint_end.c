#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a `listint_t` list
 * @head: pointer to the head node
 * @n: int value to store
 *
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (temp)
		temp->next = new;
	else
		*head = new;
	return (new);
}

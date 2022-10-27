#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *	of a listint_t linked list
 * @head: a pointer address head
 * @index: the index of the node that should be deleted.
 *	Index starts at 0
 *
 * Return: 1 is if succeeded,
 *	otherwise -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = *head;
	listint_t *node;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (count  == index - 1)
		{
			node = actual->next;
			tmp->next = node->next;
			free(node);
			return (1);
		}
		tmp = actual->next;
		count++;
	}
	return (-1);
}

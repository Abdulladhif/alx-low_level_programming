#include "lists.h"

/**
 * listint_t *get_nodeint_at_index - returns the nth node of
 *	 a listint_t linked list
 * @head: a pointer to the head
 * @index: is the index of the node staring at 0
 *
 * Return: if the node does not exist - NULL
 *	otherwise return the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

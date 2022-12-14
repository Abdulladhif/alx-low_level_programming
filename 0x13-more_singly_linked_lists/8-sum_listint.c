#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *	of a listint_t linked list
 * @head: a pointer to the head
 *
 * Return: 0 of the list is empty
 *	otherwise returns the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

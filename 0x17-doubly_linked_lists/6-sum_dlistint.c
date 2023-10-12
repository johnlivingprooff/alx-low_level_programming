#include "lists.h"

/**
 * sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the list
 * Return: Sum,or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, num;
	dlistint_t *node = head;

	while (node != NULL)
	{
		num = node->n;
		sum += num;
		node = node->next;
	}

	return (sum);
}

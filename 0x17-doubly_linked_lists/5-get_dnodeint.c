#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list
 * @index: index of nth node
 * Return: nth node at index, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}

	return (NULL);
}

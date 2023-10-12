#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer of the list
 * @idx: index to add new element
 * @n: element to be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	size_t count = 0;

	while (current->prev != NULL)
		current = current->prev;
	while (current != NULL)
	{
		if (count == idx)
		{
			current->n = n;
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}

#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the nodes
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* traverse backwards to the beginning */
	while (h->prev != NULL)
		h = h->prev;
	/* count number of elements */
	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}

	return (count);
}

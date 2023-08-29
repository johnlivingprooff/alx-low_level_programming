#include "lists.h"

/**
 * reverse_listint - reverse print
 * @head: pointer to node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL, *here = *head, *new;

	while (here != NULL)
	{
		new = here->next;
		here->next = old;
		old = here;
		here = new;
	}

	*head = old;

	return (old);
}

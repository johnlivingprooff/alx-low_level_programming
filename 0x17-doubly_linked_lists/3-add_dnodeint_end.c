#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the pointer to a node
 * @n: the element in new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;
	} else
	{
		while (current->next != NULL)
			current = current->next;

		new->prev = current;
		current->next = new;
	}

	return (new);
}

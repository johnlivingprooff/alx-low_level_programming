#include "lists.h"

/**
 * insert_nodeint_at_index - the name says it all
 * @head: pointer to the node
 * @idx: where node is inserted
 * @n: element value to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *new, *current;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}

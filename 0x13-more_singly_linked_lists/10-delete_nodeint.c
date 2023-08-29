#include "lists.h"

/**
 * delete_nodeint_at_index - it's in the name
 * @head: pointer to node
 * @index: of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *delete, *tmp, *here;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	here = *head;
	for (i = 0; here != NULL && i < index; i++)
		here = here->next;
	if (!here || !here->next)
		return (-1);
	delete = here->next;
	here->next = delete->next;
	free(delete);

	return (1);
}

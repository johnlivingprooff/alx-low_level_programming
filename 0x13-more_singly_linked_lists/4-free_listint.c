#include "lists.h"

/**
 * free_listint - frees allocated space
 * @head: the nodes to be freed
 * doesn't return
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

#include "lists.h"

/**
 * free_listint - frees allocated space
 * @head: the nodes to be freed
 * doesn't return
 */
void free_listint(listint_t *head)
{
	free(head);
}

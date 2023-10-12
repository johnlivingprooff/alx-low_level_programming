#include "lists.h"

/**
 * free_dlistint - frees up malloc'd space
 * @head: pointer to begining of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

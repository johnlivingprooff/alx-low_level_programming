#include "lists.h"

/**
 * free_listint2 - frees **node
 * @head: node
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(*head);
	}
}

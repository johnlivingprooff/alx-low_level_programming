#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to node
 * Return: n value of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	n = tmp->n;
	if (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}

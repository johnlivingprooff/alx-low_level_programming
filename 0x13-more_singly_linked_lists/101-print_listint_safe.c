#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: constant listint_t node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *tmp = head;

	for (i = 0; tmp != NULL && tmp != tmp->next; i++)
	{
		printf("[%p] %d", (const void *)tmp, tmp->n);
		tmp = tmp->next;
	}
	return (i);
}

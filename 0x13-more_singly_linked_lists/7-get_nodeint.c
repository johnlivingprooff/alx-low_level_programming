#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: node
 * @index: index of node, starts at 0
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *tmp;

	for (i = 0; i < index; i++)
		head = head->next;
	tmp = head;

	return (tmp);
}

#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: start of the linked list
 * @str: the string to be strdup
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = strlen(str);
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}

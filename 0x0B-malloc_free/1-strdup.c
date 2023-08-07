#include "main.h"

/**
* _strdup - function that returns a pointer
* to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: Given String
* Return: newly alloc mem
*/
char *_strdup(char *str)
{
	size_t i, len;
	char *s;

	len = strlen(str) + 1;
	if (str == 0)
		return (NULL);

	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
}

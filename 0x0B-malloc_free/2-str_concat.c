#include "main.h"

/**
* str_concat - function that concatenates two strings.
* @s1: string 1
* @s2: string 2
* Return: cat string 1 and 2, respectively
*/
char *str_concat(char *s1, char *s2)
{
	size_t i, j, l1, l2;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	s = malloc((l1 + l2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		s[i] = s1[i];

	for (j = 0; j < l2; j++, i++)
		s[i] = s2[j];


	s[i] = '\0';

	return (s);
}

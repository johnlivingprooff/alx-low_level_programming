#include "main.h"

/**
* _strcmp - function that compares two strings.
*
* @s1: points to the first element in string s1
* @s2: points to the first element in string s2
*
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
		;
	if (*s1 < *s2)
		return (-12);
	else if (*s1 > *s2)
		return (12);

	return (0);
}

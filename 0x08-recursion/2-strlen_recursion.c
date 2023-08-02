#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: string being measured
* Return: int n
*/
int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion(++s);
		n++;
		return (n);
	}
	return (0);
}

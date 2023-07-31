#include "main.h"

/**
* _strchr - function that locates a character in a string.
* @s: the array of string
* @c: char to be located
* Return: char *s
*/
char *_strchr(char *s, char c)
{
	size_t i = 0;

	for (; *s != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

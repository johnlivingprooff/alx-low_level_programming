#include "main.h"

/**
* _strchr - function that locates a character in a string.
* @s: the array of string
* @c: char to be located
* Return: char *s
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s - 1);
	}
	return (NULL);
}

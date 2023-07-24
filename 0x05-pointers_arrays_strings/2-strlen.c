#include "main.h"

/**
* _strlen - Counts length of string
* @s: counter
* Return: value of s
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
		s++;

	return (count);
}

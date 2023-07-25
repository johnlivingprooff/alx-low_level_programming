#include "main.h"

/**
* _strcpy - copies a string
* @src: copy from pointer
* @dest: copy to pointer
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0, b;

	for (b = 0; src[b] != '\0'; ++b)
	{
		dest[a] = src[b];
		++a;
	}
	dest[a] = '\0';

	return (dest);
}

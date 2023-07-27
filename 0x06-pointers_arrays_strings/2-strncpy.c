#include "main.h"

/**
* _strncpy - function that copies a string
*
* @dest: points to the address of the dest string in memory
* @src: points to the address of the src string in memory
* @n: number of characters to copy
*
* Return: char *
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	for (; *src != '\0' && n > 0; tmp++, src++)
	{
		*tmp = *src;
		n--;
	}
	for (; n > 0; tmp++, n--)
		*tmp = '\0';
	return (dest);
}

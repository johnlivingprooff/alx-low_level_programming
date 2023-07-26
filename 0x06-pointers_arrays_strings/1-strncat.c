#include "main.h"

/**
* _strncat - function that concatenates two strings
*
* @dest: points to the address of the dest string in memory
* @src: points to the address of the src string in memory
* @n: amount of bytes in src
*
* Return: char *
*/
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	for (; *dest != '\0'; dest++)
		;
	for (; *src != '\0' && n > 0; dest++, src++, n--)
			*dest = *src;
	*dest = '\0';
	return (tmp);
}

#include "main.h"

/**
* _strcat - appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
*
* @dest: points to the address of the dest string in memory
* @src: points to the address of the src string in memory
* Return: char *
*/
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	for (; *dest != '\0'; dest++)
		;
	for (; *src != '\0'; dest++, src++)
		*dest = *src;
	*dest = '\0';
	return (tmp);
}

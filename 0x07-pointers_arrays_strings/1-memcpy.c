#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src to memory area dest
* @n: number of bytes to be filled
* @src: Source array
* @dest: Destination Array
* Return: Char *dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

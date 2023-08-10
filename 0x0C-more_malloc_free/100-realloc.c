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

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer to prev. allocated memory
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
* Return: type cast for this function
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t size;
	void *ptr2;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		size = new_size > old_size ? old_size : new_size;
		_memcpy(ptr2, ptr, size);
		free(ptr);
	}

	return (ptr);
}

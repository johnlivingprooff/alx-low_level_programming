#include "main.h"

/**
* _calloc - function that allocates memory for an array, using malloc.
* crude implementation of calloc
* @nmemb: number of elements in array
* @size: bytes of memory to be allocated
* Return: allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i, t_size = nmemb * size;
	char *arr;

	/*If nmemb or size is 0, then _calloc returns NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*allocate whole block of memory*/
	arr = malloc(t_size);
	if (arr == NULL)
		return (NULL);

	/*assign zeros to allocated memory*/
	for (i = 0; i < t_size; i++)
		arr[i] = 0;

	return (arr);
}

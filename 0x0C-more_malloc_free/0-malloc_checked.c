#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc.
* @b: size of memory allocated
* Return: pointer to where function is called.
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}

#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index.
 * @n: pointer to the value to modify
 * @index: index of the bit to set
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit = 1UL << index;
	*n = *n | bit;

	return (1);
}

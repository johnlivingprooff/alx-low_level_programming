#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value to convert
 * @index: index to return
 * Return: in the function description
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit = 1UL << index;

	if (n & bit)
		return (1);
	else
		return (0);
}

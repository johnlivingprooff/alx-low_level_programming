#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t exchng = n ^ m, i;

	for (i = 0; exchng > 0;)
	{
		i += exchng & 1;
		exchng >>= 1;
	}
	return (i);
}

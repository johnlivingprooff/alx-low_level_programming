#include "main.h"

/**
 * _pow - exponential of a value
 * @b: the base value
 * @exp: the exponent
 * Return: the exp of b, or 0 if failed
 */
size_t _pow(size_t b, size_t exp)
{
	size_t x = 1, i;

	for (i = 0; i < exp; i++)
		x *= b;
	return (x);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a binary string
 * Return: decimal value of string or 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i, len, dec = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		dec = dec * 2 + (b[i] - '0');
	}
	return (dec);
}

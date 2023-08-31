#include "main.h"

/**
 * print_binary - prints the equiv binary of a decimal
 * @n: integer to conv. & print
 * void function, doesn't return.
 */
void print_binary(unsigned long int n)
{
	size_t bitMask;
	int zero = 1;

	if (n == 0)
		_putchar('0');

	bitMask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (bitMask > 0)
	{
		if (n & bitMask)
		{
			zero = 0;
			_putchar('1');
		} else if (!zero)
		{
			_putchar('0');
		}
		bitMask >>= 1;
	}

}

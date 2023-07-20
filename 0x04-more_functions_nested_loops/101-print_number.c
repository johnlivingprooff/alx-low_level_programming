#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int count, digit, i;
	int div = 10;

	while (n != 0)
	{
		n = n / 10;
		count++;
	}

	if (n < 0)
		_putchar('-');

	for (i = count; i >= 0; i--)
	{
		digit = n / div;
		_putchar(digit + '0');
	}
}

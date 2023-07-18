#include "main.h"

/*
 * Function that prints the last digit of a number.
 */void jack_bauer(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(i * n + '0');
			_putchar(',');
			_putchar('  ')
		}
		_putchar(10);
	}
}


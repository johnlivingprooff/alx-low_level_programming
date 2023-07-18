#include "main.h"

/*
 * Function that prints the last digit of a number.
 */void jack_bauer(void)
{
	int i, n;

	for (i = 0; i <= 23; i++)
	{
		n = 0;
		for (n = i + 1; n <= 59; n++)
		{
			_putchar(i % 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(n % 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(10);
		}
	}
}


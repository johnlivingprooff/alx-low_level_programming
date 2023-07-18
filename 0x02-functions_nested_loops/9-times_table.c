#include "main.h"

/*
 * Function that prints the last digit of a number.
 */void times_table(void)
{
	int i, n, prod;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			prod = i * n; 
			if (prod < 10)
			{
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}


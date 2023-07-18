#include "main.h"
#include <stdio.h>

/*
 * function that prints all natural numbers
 * from n to 98
 *
 */void print_to_98(int n)
{
	if (n < 98)
	{
	for (; 98 >= n; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n >= 98; n++)
		{
			printf("%d, ", n);
		}
	}
}

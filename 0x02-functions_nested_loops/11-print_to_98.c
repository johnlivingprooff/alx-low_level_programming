#include "main.h"
#include <stdio.h>

/*
 * function that prints all natural numbers
 * from n to 98
 *
 */void print_to_98(int n)
{
	for (; n >= 98 || n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}

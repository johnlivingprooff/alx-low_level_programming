#include "main.h"
#include <stdio.h>

int _abs(int n);
/*
 * Function that prints the last digit of a number.
 */int print_last_digit(int x)
{
	int i = x % 10;

	_abs(i);
	_putchar(i + '0');

	return (i);
}

/*
 * Function for abs
 *
 */int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

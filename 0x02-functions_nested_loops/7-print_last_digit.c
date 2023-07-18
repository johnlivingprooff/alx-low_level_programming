#include "main.h"

/*
 * Function that prints the last digit of a number.
 */int print_last_digit(int x)
{
	int i = (x % 10) * -1;

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

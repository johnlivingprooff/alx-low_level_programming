#include "main.h"
/*
 * Function that prints the last digit of a number.
 *
 *
 */int print_last_digit(int x)
{
	int i = x % 10;

	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

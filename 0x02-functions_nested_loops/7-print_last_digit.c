#include "main.h"
#include <stdio.h>
/*
 * Function that prints the last digit of a number.
 *
 *
 */int print_last_digit(int x)
{
	int i = x % 10;

	printf("%d", i);

	return (i);
}

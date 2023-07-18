#include "main.h"
#include <stdio.h>

/*
 * function that prints all natural numbers
 * from n to 98
 *
 */void print_to_98(int n)
{
	if (n <= 98)
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	else if (n >= 98)
	for (; n >= 98; n--)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}

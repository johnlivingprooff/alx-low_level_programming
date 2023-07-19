#include "main.h"
#include <stdio.h>

/*
 * Function that prints the last digit of a number.
 */void times_table(void)
{
	int div, i, n, prod;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			prod = i * n;
			printf("%2d, ", prod);
		}
		div = prod / n;
		if (div == 9)
		{
			printf("%2d", prod);
		}
		printf("\n");
	}
}


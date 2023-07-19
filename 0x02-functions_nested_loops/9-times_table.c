#include "main.h"
#include <stdio.h>

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
			if (i < 9)
			{
				printf("%2d, ", prod);
			}
			else if (i == 9)
			{
				printf("%2d", prod);
			}
		}
		printf("\n");
	}
}


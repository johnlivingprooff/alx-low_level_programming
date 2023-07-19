#include "main.h"
#include <stdio.h>

/*
 * Function that prints the last digit of a number.
 */void times_table(void)
{
	int i, n, prod;
	int ch = 0;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			prod = i * n;
			if (n < 9)
			{
				printf("%2d, ", prod);
				ch += 4;
			}
			else if (n == 9)
			{
				printf("%2d", prod);
				ch += 2;
			}

			if (ch >= 380)
			{
				return;
			}
		}
		printf("\n");
	}
}


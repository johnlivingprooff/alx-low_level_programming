#include "main.h"
#include <stdio.h>

/*
 * function that prints the n times table, starting with 0
 */void print_times_table(int n)
{
	int i, x, prod;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= 9; i++)
		{
			for (x = 0; x <= 9; x++)
			{
				prod = i * x;
				if (x == n)
				{
					printf("%2d", prod);
				}
				else if (x == 0)
				{
					printf("%d, ", prod);
				}
				else
				{
					printf("%2d, ", prod);
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}

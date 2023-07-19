#include "main.h"
#include <stdio.h>

/*
 * function that prints the n times table, starting with 0
 */void print_times_table(int n)
{
	int i, x, prod;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				prod = i * x;
				if (x == 0)
				{
					printf("%d, ", prod);
				}
				else if (x == n)
				{
					printf("%2d", prod);
				}
				else
				{
					printf("%3d, ", prod);
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

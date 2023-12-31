#include "main.h"
#include <stdio.h>

/*
 * function that prints the n times table, starting with 0
 */void print_times_table(int n)
{
	int i, x, prod;

	if (n == 0)
	{
		printf("0\n");
	}
	else if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				prod = i * x;
				if (x == n)
				{
					printf("%3d", prod); /* --0 */
				}
				else if (x == 0)
				{
					printf("%d, ", prod);
				}
				else
				{
					printf("%3d, ", prod); /* --6,  */
				}
			}
			printf("\n");
		}
	}
	else
	{
		return;
	}
}

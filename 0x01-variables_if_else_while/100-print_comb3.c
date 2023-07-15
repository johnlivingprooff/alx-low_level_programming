#include <stdio.h>
/*
 *main - Entry Point
 *
 *returns 0
 *
 */int main(void)
{
	int i;
	int n;

	for (i = 0; i < 9; i++)
	{
		for (n = 1; n <= 9; n++)
		{
			if (i < n)
			{
				putchar(i + '0');
				putchar(n + '0');
			}
			if (i != 9 && i < n)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

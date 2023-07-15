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
	int x;

	for (i = 0; i < 9; i++)
	{
		for (n = 1; n < 8; n++)
		{
			for (x = 2; x <= 9; x++)
			{
				if (i < n)
				{
					putchar(i + '0');
					putchar(n + '0');
				}
				if (n < x)
				{
					putchar(x + '0');
				}
				if (i != 9 && n != 9 && x != 9 && i <= n && n <= x)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

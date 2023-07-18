#include <stdio.h>
/*
 *main - Entry Point
 *
 *returns 0
 *
 */int main(void)
{
	int i = 0;
	int n = 0;

	while (i < 9)
	{
		n = 1;
		while (n <= 9)
		{
			if (i < n)
			{
				putchar(i + '0');
				putchar(n + '0');
			}
			if (i != 9 && n != 9 && i <= n)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

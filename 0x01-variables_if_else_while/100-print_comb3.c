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

	while (i <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			putchar('0' + i);
			putchar('0' + n);
			putchar(',');
			putchar(' ');

			n++
		}

		i++
	}

	putchar('\n');
	return (0);
}

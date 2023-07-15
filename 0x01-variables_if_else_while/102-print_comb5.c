#include <stdio.h>
/*
 *main - Entry Point
 *
 *returns 0
 *
 */int main(void)
{
	int a = 0;
	int b = 1;

	for (; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

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
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (!(a == 99 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		b = a + 2;
	}
	putchar('\n');
	return (0);
}

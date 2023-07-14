#include <stdio.h>
/*
 *main - Entry Point
 *
 *returns 0
 *
 */int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (i = 10; i < 17; i++)
	{
		putchar(65 + i);
	}

	putchar('\n');
	return (0);
}

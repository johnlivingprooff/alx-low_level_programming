#include <stdio.h>
/*
 *main - Entry Point
 *
 *returns 0
 *
 */int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');
	return (0);
}

#include "main.h"
#include <ctype.h>

/**
* print_buffer - Function prints a buffer
* Format: 00000000: xxxx xxxx xxxx xxxx (the line contained in 10 bytes)
* @b: pointer with buffer
* @size: for size of buffer
*
* Return: void
*/
void print_buffer(char *b, int size)
{
	int a, x;
	char c;

	if (size <= 0)
	{
		putchar(10);
		return;
	}

	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);

		for (x = 0; x < 10; x++)
		{
			if (a + x < size)
				printf("%02x", (unsigned char)b[a + x]);
			else
				printf("  ");

			if (x % 2 != 0)
				printf(" ");
		}

		for (x = 0; x < 10; x++)
		{
			if (a + x < size)
			{
				c = b[a + x];
				printf("%c", (isprint(c) || c == 32) ? c : 46);
			} else
			{
				printf(" ");
			}
		}

		putchar(10);
	}
}

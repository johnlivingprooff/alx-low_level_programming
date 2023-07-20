#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @
* Return: Always 0
*/
int main(void)
{
	int n = 0;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");

		if (n % 5 == 0)
			printf("Buzz");

		if ((n % 3 != 0) && (n % 5 != 0))
			printf("%d", n);

		if (n < 100)
			printf(" ");
	}
	putchar(10);
	return (0);
}

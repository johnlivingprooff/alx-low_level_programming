#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @
* Return: 0
*/
int main(void)
{
	unsigned long int i = 2;
	unsigned long int number = 612852475143;

	for (; i < number / 2; i++)
	{
		if (number % i == 0)
			number = number / i;
	}
	printf("%lu\n", number);
	return (0);
}

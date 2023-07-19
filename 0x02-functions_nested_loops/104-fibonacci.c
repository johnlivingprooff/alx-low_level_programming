#include "main.h"
#include <stdio.h>

/*
 *
 * Main - Entry point
 */int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, next;
	unsigned long f1h1, f2h1, f1h2, f2h2, half1, half2;
	
	printf("1,2");
	for (i = 0; i <= 92; i++)
	{
	next = fib1 + fib2;
	printf(", %lu", next);
	fib1 = fib2;
	fib2 = next;
	}
	f1h1 = fib1 / 10000000000;
	f2h1 = fib2 / 10000000000;
	f1h2 = fib1 % 10000000000;
	f2h2 = fib2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
	half1 = f1h1 + f2h1;
	half2 = f1h2 + f2h2;
	if (f1h2 + f2h2)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf(", %lu%lu", half1, half2);
	f1h1 = f2h1;
	f1h2 = f2h2;
	f2h1 = half1;
	f2h2 = half2;
	}
	printf("\n");
}

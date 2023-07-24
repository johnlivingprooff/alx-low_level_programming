#include "main.h"

/**
* swap - Function swaps the value of two integers
* @*a: swaps into &b && @*b: swaps into &a
* Return: void
*/
void swap_int(int *a, int *b)
{
	int *c;

	a = b;
	b = c;
	printf("is a's address still %p\n", a);
	printf("is b's address still %p\n", b);
	printf("what is c's address %p\n", c);
}

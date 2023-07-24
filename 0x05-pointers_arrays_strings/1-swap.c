#include "main.h"

/**
* swap_int - Function swaps the value of two integers
* @a: swaps into &b
* @b: swaps into &a
* Return: void
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

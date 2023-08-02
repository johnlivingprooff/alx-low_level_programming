#include "main.h"

int _sqrt_helper(int n, int x);
/**
* _sqrt_recursion - function that returns
* the natural square root of a number.
* @n: the number
* Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

/**
* _sqrt_helper - finds the natural square root
* @n: The number
* @x: guessed square-root
* Return: natural square-root of n or -1
*/
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	else if (x * x > n)
		return (-1);

	else
		return (_sqrt_helper(n, x + 1));
}

#include "main.h"

/**
* _sqrt_recursion - function that returns
* the natural square root of a number.
* @n: the number
* Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	float x, x1;
	
	if (n % 2)
		return (-1); /* -1 represents unnatural squareroot */

	x = n / 2;
	x1 = (x + n / x) / 2;

	if (x1 * x1 <= n && (x-1) * (x-1) > n)
	{
		return (_sqrt_recursion(n));
	}
}

#include "main.h"

/**
* factorial - function that returns the factorial of a given number.
* where factorial of 0 is 1
* @n: given number
* Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}

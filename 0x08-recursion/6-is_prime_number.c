#include "main.h"
#include <math.h>


int findPrime(int n, int div);
/**
* is_prime_number - function that returns 1
* if the input integer is a prime number, otherwise return 0
* @n: number to be checked
* Return: 1 if prime, 0 if not prime
*/
int is_prime_number(int n)
{
	return (findPrime(n, n / 2));
}

/**
* findPrime - Function is based on Trial division
* @n: number being tested
* @div: current divisor used to test
* Return: 1 - prime number 0 - not prime
*/
int findPrime(int n, int div)
{
	if (n <= 1)
		return (0);

	if (div == 1)
		return (1);

	if (n % div == 0)
		return (0);

	return (findPrime(n, div - 1));
}

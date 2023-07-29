#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define PASS 10

/**
* main - program that generates random
* valid passwords for the program 101-crackme.
*
* Return: Always (0)
*/
int main(void)
{
	int pass[PASS];
	int i, a, x;

	srand(time(NULL));

	for (i = 0; i < PASS; i++)
	{
		x = rand() % RAND_MAX;
		pass[i] = x;
	}

	for (a = 0; a <= PASS; a++)
	{
		putchar(pass[a] + '0');
	}
	
	putchar(10);
	return (0);
}

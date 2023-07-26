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
	int pass[PASS + 1];
	int i, x;

	srand(time(NULL));

	for (i = 0; i < PASS; i++)
	{
		x = rand() % INT_MAX;
		pass[i] = x;
	}
	pass[PASS] = '\0';

	for (int a = 0; a < PASS + 1; a++)
	{
		putchar(pass[a] + '0');
	}
	
	putchar(10);
	return (0);
}

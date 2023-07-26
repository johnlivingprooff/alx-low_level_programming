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
	char pass[PASS + 1];
	int i, a, x;

	srand(time(NULL));

	for (i = 0; i < PASS; i++)
	{
		x = rand() % INT_MAX;
		pass[i] = x;
	}
	pass[PASS] = '\0';

	printf("%s\n", pass);
	return (0);
}

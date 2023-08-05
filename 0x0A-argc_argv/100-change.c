#include "main.h"

/**
 * main - Program that prints the minimum number of coins for change.
 * @argc: Number of arguments (arg count).
 * @argv: Array of arguments (arg vector).
 * Return: 0 - Success, 1 - Error.
 */
int main(int argc, char *argv[])
{
	int cents;
	int values[] = {25, 10, 5, 2, 1};
	int i, coin = 0, val = 5;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < val; i++)
	{
		for (; cents >= values[i]; coin++)
			cents -= values[i];
	}

	printf("%d\n", coin);
	return (0);
}

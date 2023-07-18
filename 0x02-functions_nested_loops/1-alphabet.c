#include "main.h"

/*
 * main Function - Entry
 *
 * prints the alphabet, in lowercase
 * followed by a new line.
 *
 */int main(void)
{
	char lCase[26];
	int i;

	print_alphabet(lCase);

	for (i = 0; i < 26; i++)
	{
		_putchar(lCase[i]);
	}
	_putchar('\n');

	return (0);
}

/*
 * Function that prints lowercase alphabets
 *
 */void print_alphabet(char lCase[])
{
	int i;

	for (i = 0; i < 26; i++)
	{
		lCase[i] = i + 97;
	}
}

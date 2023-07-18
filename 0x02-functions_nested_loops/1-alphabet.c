#include "main.h"

/*
 * main Function - Entry
 *
 * prints the alphabet, in lowercase
 * followed by a new line.
 *
 */int main(void)
{
	_putchar(print_alphabet);
	_putchar('\n');

	return (0);
}

/*
 * Function that prints lowercase alphabets
 *
 */void print_alphabet(void)
{
	int i;
	char lCase[26];

	for (i = 0; i < 26; i++)
	{
		lCase[i] = i + 97;
	}
}

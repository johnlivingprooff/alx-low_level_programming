#include "main.h"
#include <stdio.h>

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

	print_alphabet();

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
 */void print_alphabet()
{
	char l;

	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	}
	putchar(10);
}

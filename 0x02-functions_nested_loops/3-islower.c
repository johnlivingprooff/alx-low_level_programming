#include "main.h"

/*
 * function that  checks for lowercase character.
 *
 */int _islower(int c)
{

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	if (letters[c] == 97 && letters[c] <= 122)
	{
		i = _putchar('1');
	}
	else
	{
		i = _putchar('0');
	}
	return (i);
}
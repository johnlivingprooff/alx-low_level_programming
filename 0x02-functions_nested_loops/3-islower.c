#include "main.h"

/*
 * function that  checks for lowercase character.
 *
 */int _islower(int c)
{

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (letters[c] == 97 && letters[c] <= 122)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
	return (c);
}

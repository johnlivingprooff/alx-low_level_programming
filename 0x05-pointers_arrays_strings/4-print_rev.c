#include "main.h"
#include <string.h>

/**
* print_rev - prints out a string
* @s: pointer that prints string in reverse
* Return: void
*/
void print_rev(char *s)
{
	int length = 0;

	length = strlen(s);

	for (--length; length >= 0; --length)
		_putchar(s[length]);

	_putchar(10);
}

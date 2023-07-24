#include "main.h"

/**
* _print_rev - prints out a string
* @s: pointer that prints string in reverse
* Return: void
*/
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	printf("lenght of string: %d\n", length);
	while (length - 1 > 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}

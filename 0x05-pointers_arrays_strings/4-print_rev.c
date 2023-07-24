#include "main.h"

int _strlen(char *s);
/**
* print_rev - prints out a string
* @s: pointer that prints string in reverse
* Return: void
*/
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	/* printf("lenght of string: %d\n", length); */
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar(10);
}

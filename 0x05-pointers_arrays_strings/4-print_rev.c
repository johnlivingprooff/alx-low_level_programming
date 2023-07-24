#include "main.h"

int _strlen(char *s);
/**
* _puts - prints out a string
* @str: pointer that prints string
* Return: void
*/
void _puts(char *str)
{
	int length;

	length = _strlen(str);
	printf("lenght of string: %d\n", length);
	while (length - 1 > 0)
	{
		_putchar(*str);
		str--;
	}
	_putchar(10);
}

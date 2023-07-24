#include "main.h"
#include <string.h>

/**
* _puts - prints out a string
* @str: pointer that prints string
* Return: void
*/
void _puts(char *str)
{
	int length;

	length = strlen(str);
	printf("lenght of string: %d\n", length);
	while (length - 1 > 0)
	{
		_putchar(*str);
		str--;
	}
	_putchar(10);
}

#include "main.h"
#include <string.h>

/**
* puts2 - prints every other character of a string
* @str: pointer that prints string
* Return: void
*/
void puts2(char *str)
{
	int i = 0;

	for (++i; *str != '\0'; ++str)
	{
		if (*str % 2 == 0)
		_putchar(*str);
	}
	_putchar('\n');
}

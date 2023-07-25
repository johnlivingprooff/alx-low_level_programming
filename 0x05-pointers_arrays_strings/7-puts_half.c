#include "main.h"
#include <string.h>

/**
* puts_half - prints out half a string
* @str: pointer that prints half
* Return: void
*/
void puts_half(char *str)
{
	int l, i;

	l = strlen(str);

	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; ++i)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((l - 1) / 2) + 1; str[i] != '\0'; ++i)
			_putchar(str[i]);
	}
	_putchar(10);
}

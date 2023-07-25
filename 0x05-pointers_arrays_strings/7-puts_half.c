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
	for (i = 0; str[i] >= (i % l == 0); ++i)
	{
		if (i % l == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}

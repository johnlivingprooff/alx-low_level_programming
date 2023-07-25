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

	for (; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

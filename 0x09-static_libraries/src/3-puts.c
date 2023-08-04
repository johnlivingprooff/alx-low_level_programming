#include "main.h"

/**
* _puts - prints out a string
* @str: pointer that prints string
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

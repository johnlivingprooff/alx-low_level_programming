#include "main.h"

/**
* main - Program that prints its name and \n
* @argc: number of commands
* @argv: array of commands
* Return: Always 0 (success)
*/
int main(char *argv[])
{
	_puts(argv[0]);
	return (0);
}

/**
* _puts - that prints a string, followed by a new line
* @s: contains the string to be printed.
*/
void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s); /* this prints the first char in s */
	_puts(s + 1); /* recursion to iterate through s by +1 */
}

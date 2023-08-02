#include "main.h"

/**
* _puts_recursion - that prints a string, followed by a new line
* @s: contains the string to be printed.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s); /* this prints the first char in s */
	_puts_recursion(s + 1); /* recursion to iterate through s by +1 */
}

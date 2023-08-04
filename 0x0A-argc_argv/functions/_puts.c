#include "main.h"

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

#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: string being measured
* Return: int n
*/
int _strlen_recursion(char *s)
{
	int n;

	/* where recursion happens 
	* for Dreams feel real while we're in them.
	*	It's only when we wake up that
	* we realize something was actually strange
	*/
	if (*s != '\0')
	{
		n = _strlen_recursion(++s);
		n++;
		return (n);
	}
	return (0);
}

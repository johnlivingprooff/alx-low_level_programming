#include <unistd.h>
#include "main.h"

/**
* _putchar - prints one character
* @c: Character to print
*
* Return: 0 - success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

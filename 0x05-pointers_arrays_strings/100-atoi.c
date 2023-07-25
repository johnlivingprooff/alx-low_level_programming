#include "main.h"

/**
* _atoi - Function converts a string to an integer
* @s: converts the string
* Return: void
*/
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int n = 0;

	if (s[0] == '-')
	{
		sign *= -1;
	}
	else if (s[0] == ' ' || s[0] == '+')
	{
		for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
			n = 10 * n + (s[i] - '0');
	}
	return (n);
}

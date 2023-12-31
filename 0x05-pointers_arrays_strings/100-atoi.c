#include "main.h"

/**
* _atoi - Function converts a string to an integer
* @s: converts the string
* Return: void
*/
int _atoi(char *s)
{
	int i, sign = 1; // i represents the element number of the *s array:
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			sign *= -1; // sign = sign * -1 
		else if (s[i] >= 48 && s[i] <= 57) // 0 <= x >=9 i.e x is between 0 - 9
		{
			n = 10 * n + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
	}
	return (n * sign);
}

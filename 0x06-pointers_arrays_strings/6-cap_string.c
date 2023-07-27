#include "main.h"

/**
* string_toupper - capitalizes all words of a string. 
*
* @str: will be used in the function
*
* Return: p
*/
char *cap_string(char *str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		for (; !(str[i] >= 'a' && str[i] <= 'z'); i++)
			;
		if (str[i - 1] == ' ' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == ';' ||
			str[i - 1] == ',' ||
			str[i - 1] == '?' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '"' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			str[i - 1] == '\n' ||
			str[i - 1] == '\t' ||
			i == 0)
				str[i] = str[i] - ('a' - 'A');
	}
	return (str);
}

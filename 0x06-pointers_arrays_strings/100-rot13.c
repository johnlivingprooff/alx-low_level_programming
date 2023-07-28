#include "main.h"

/**
* rot13 - Ciher for characters.
*
* @str: point to the char that is deciphered
*
* Return: str
*/
char *rot13(char *str)
{
	int i, x;
	char forwd[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rev[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (forwd[x] == str[i])
			{
				str[i] = rev[x];
				break;
			}
		}
	}
	return (str);
}

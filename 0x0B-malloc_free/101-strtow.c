#include "main.h"

/**
* strtow - function that splits a string into words.
* @str: string to be split by spaces
* Return: pointer to pointer
*/
char **strtow(char *str)
{
	size_t i, j, l = 0, w_strt = 0, index = 0, c_total = 0;
	char **array_of_words, *new_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			l++; /* calculates no. of words */
	}
	if (l == 0)
		return (NULL);
	array_of_words = malloc(sizeof(char *) * (l + 1));
	if (array_of_words == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			c_total = 0;
			w_strt = i;
			for (; str[i] && str[i] != ' '; c_total++, i++)
				;
			new_word = malloc(sizeof(char) * (c_total));
			if (new_word == NULL)
			{
				for (j = 0; j < index; j++)
					free(array_of_words[j]);
				free(array_of_words);
				free(new_word);
				return (NULL);
			}
			for (j = 0; j < c_total; j++)
				new_word[j] = str[w_strt + j];
			new_word[j] = '\0';
			array_of_words[index] = new_word;
			index++;
		}
	}
	array_of_words[l] =  NULL;
	return (array_of_words);
}

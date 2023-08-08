#include "main.h"

/**
* strtow - function that splits a string into words.
* @str: string to be split by spaces
* Return: pointer to pointer
*/
char **strtow(char *str)
{
	size_t i, j, l, w_len, w_strt = 0, index = 0;
	char **array_of_words, *new_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	l = strlen(str);
	array_of_words = (char **)malloc(sizeof(char *) * (l + 1));
	if (array_of_words == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ')
		{
			w_strt = i;
			w_len = 0;
			for (; str[i + w_len] && str[i + w_len] != ' '; w_len++)
				;
			new_word = (char *)malloc(sizeof(char) * w_len);
			if (new_word == NULL)
			{
				/* for (j = 0; j < index; j++) */
				free(new_word);
				free(array_of_words);
				return (NULL);
			}
		/* strncpy(new_word, str + w_strt, w_len); */
		for (j = 0; j < w_len; j++)
			new_word[j] = str[w_strt + j];
		new_word[w_len] = '\0';
		array_of_words[index] = new_word;
		index++;
		i += w_len;
		}
	}
array_of_words[l] =  NULL;
return (array_of_words);
}

#include "main.h"
/**
 * strtow - function that splits a string into words.
 * @str: string to be split by spaces
 * Return: pointer to pointer
 */
char **strtow(char *str)
{
        size_t i, j, l = 0, w_strt = 0, index = 0, c_total = 0, w_len = 0;
        char **array_of_words, *new_word;

        if (str == NULL || *str == '\0')
                return (NULL);
        for (i = 0; str[i]; i++)
        {
                if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
                        l++; /* calculates no. of words */
        }
        if (l == 0)
                return (NULL);
        printf("Number of words: %ld\n", l);

        array_of_words = (char **)malloc(sizeof(char *) * (l + 1));
        if (array_of_words == NULL)
                return (NULL);

        for (i = 0; str[i]; i++)
        {
                if (str[i] != ' ')
                {
                        w_strt = i; // Store the index where the word starts
                        w_len = 0;
                        for (; str[i] && str[i] != ' '; i++, w_len++)
                                ;
                        new_word = (char *)malloc(sizeof(char) * (w_len + 1));
                        if (new_word == NULL)
                        {
                                for (j = 0; j < index; j++)
                                        free(array_of_words[j]);
                                free(array_of_words);
                                return (NULL);
                        }

                        for (j = 0; j < w_len; j++)
                                new_word[j] = str[w_strt + j];
                        new_word[w_len] = '\0';

                        array_of_words[index] = new_word;
                        index++;
                }
        }
        array_of_words[index] = NULL;
        return array_of_words;
}

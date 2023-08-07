#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, inp1[99], inp2[99];

		printf("Enter Input 1: ");
		scanf("%s", inp1);

		printf("Enter Input 2: ");
		scanf("%s", inp2);
    
		s = str_concat(inp1, inp2);
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

#include "main.h"

/**
* main - program that prints
* the number of arguments passed into it.
* @argc: number of arguments (agr count)
* @argv: array of arguments (arg vector)
* Return: 0 - success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

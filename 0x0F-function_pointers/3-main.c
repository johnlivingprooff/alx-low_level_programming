#include "3-calc.h"

/**
 * main - function does calculations
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0- success
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4 || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	/*calc = get_op_func(argv[2])(num1, num2);*/

	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}

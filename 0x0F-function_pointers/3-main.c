#include "3-calc.h"

/**
 * main - function does calculations
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0- success
 */
int main(int argc, char **argv)
{
	char *operator;
	int calc, num1, num2;
	int (*calculation)(int, int);

	if (argc != 4 || (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	calculation = get_op_func(operator);

	if (calculation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = calculation(num1, num2);

	printf("%d\n", calc);
	return (0);
}

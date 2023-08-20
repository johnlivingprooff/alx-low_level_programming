#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: argument to be printed
 */
void print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @args: argument to be printed
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}

/**
 * print_float - prints a number with decimal
 * points, e.g: 5.86
 * @args: argument to be printed
 */
void print_float(va_list args)
{
	float f = (float)va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - prints a string
 * @args: argument to be printed
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - function prints anything
 * @format: hols all the formats to print
 * does not return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	prints_format print_it[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	int i = 0, j;
	char *sepr = ", ";

	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(print_it[j].specifier))
			{
				print_it[j].print(args);
				if (format[i + 1] != '\0')
					printf("%s", sepr);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	putchar(10);
}

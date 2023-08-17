#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * @format: hols all the formats to print
 * does not return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c, *s;
	int i, index = 0, prints = 0;
	float f;

	va_start(args, format);
	while (format[index] != '\0')
	{
		switch (format[index])
		{case 'c':
				c = (char)va_arg(args, int);
				printf("%c, ", c);
				prints = 1;
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d, ", i);
				prints = 1;
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f, ", f);
				prints = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s, ", s);
				prints = 1;
				break;
			default:
				break;
		}
		index++;
	}
	va_end(args);
	if (prints)
		putchar(10);
}

#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, counter = 0;
	char *str;
	char *sep = ", ";

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[counter])
	{
		if (counter == (i - 1))
		{
			sep = "";
		}
		switch (format[counter])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		counter++;
	}
	printf("\n");
	va_end(args);
}

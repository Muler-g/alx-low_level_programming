#include "variadic_function.h"
#include <stdio>

/**
 *  print_strings - Print strings
 *
 *  @separator: String beetween numbers
 *
 *  @n: Number of args
 *
 *  Return return type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;
	char *args;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ptr, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(ptr);
}

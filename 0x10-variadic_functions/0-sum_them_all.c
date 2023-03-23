#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all of function parameters
 * @n: intiger parameters
 *
 * Return: 0 if n is 0, else sum of fun parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;
	int sum = 0;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}

	va_end(ptr);

	return (sum);
}

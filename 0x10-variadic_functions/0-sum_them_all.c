#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;

	unsigned int i, sum = 0;

	va_start(para, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum = sum + va_arg(para, const unsigned int);
	}

	va_end(para);

	return (sum);
}

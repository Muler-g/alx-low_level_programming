#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14, 10 times.
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int n, m;

	for (n = 1; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}


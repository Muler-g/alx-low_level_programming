#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be represented
 *
 * Return: binary of n
 */
void print_binary(unsigned long int n)
{
	int i, length = 0;
	unsigned long int  value;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;

			if (value & 1)
			{
				_putchar('1');
				length +=1;
			}
			else if (length)
				_putchar('0');
	}
	if (!length)
		_putchar('0');
}

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
	unsigned long int value;
	int i;

	for (i = 63; i >= 0; i--)/*unsigned long int(64 bit) consis of 0-63 bits*/
	{
		value = (1 << i);
		
		if (n & value)
			_putchar('1');
		else
			_putchar('0');
	}
}

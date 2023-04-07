#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the input number
 * @index: the index starting from 0 of the bit
 * Return: 1 if works,-1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n =  *n & mask;
	return (1);
}

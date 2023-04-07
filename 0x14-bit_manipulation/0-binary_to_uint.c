#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, else 0 if b is NULL 
 * 	   or more chars in string b other than 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;
	
	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}

#include "main.h"

/**
 * _isuper - checks for uppercase character
 * @c: The character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isuper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}


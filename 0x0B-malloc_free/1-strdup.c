#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: string to copy
 *
 * Return: a pointer to the duplicated string or
 * Null if insufficient memory or str == NULL
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *strcopy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)

	strcopy = malloc(i * sizeof(char));

	if (strcopy == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		strcopy[j] = str[j];

	return (strcopy);
}

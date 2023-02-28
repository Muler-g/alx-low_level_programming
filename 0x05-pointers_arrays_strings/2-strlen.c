#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: input string
 * Return: none
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}

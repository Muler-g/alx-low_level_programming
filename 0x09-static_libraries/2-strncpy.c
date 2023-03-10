#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer to destination string.
 * @src:pointer to source string
 * @n: number of bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)

	dest[i] = '\0';


	return (dest);
}

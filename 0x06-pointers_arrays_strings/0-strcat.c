#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int l, j;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (j = 0; src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}

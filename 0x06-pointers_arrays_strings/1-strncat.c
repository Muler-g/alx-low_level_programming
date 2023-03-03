#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 * it will use at most n bytes from src.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	for (m = 0; m < n && src[m] != '\0'; m++, l++)
	{
		dest[l] = src[m];
	}
	dest[l] = '\0';
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: needle else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;

	n = strstr(haystack, needle);

	return (n);
}

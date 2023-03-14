#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: contents of s1 followed by s2 else NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	char *newstr;

	a = strlen(s1);
	b = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	newstr = malloc(sizeof(char) * (a + b) + 1);

	if (!newstr)
		return (NULL);

	for (i = 0; i < a; i++)
		newstr[i] = s1[i];

	for (j = 0; j < b; j++, i++)
		newstr[i] = s2[j];

	newstr[i] = '\0';

	return (newstr);
}

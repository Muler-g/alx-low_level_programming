#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function copies the string to buffer
 * including terminating null byte (\0)
 * @dest: points the buffer to copy string to
 * @src: points the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

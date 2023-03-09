#include "main.h"
int s_len(char *s);
int pal(char *s, int i, int len);

/**
 * s_len - calculates the length of a string.
 * @s: string
 * Return: length of string.
 */
int s_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + s_len(s + 1));
}

/**
 * pal - check if a string is a palindrome.
 * @s: checked string
 * @i: initial point of recursion
 * @len: length of string
 * Return: 1 if s is palindrome, if not 0.
 */
int pal(char *s, int i, int len)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
	{
		return (1);
	}
	else if (*(s + i) != *(s + len - 1 - i))
	{
		return (0);
	}
	else
	{
		return (pal(s, i + 1, len));
	}
}
/**
 * is_palindrome - checks if a string is palindrome.
 * @s: checked string
 * Return: 1 if a string is palindrome, if not 0.
 */
int is_palindrome(char *s)
{
	if (pal(s, 0, s_len(s)) == 1)
		return (1);
	else
		return (0);
}

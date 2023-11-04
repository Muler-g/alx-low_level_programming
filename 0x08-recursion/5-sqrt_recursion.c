#include "main.h"

/**
 * helper - function to loop
 * @n: integer arg
 * @i: int arg
 *
 * Return: sqaure root
 */

int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
		return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: int arg
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}

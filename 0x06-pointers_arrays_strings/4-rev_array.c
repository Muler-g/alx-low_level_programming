#include "main.h"

/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;
	n = n - 1;

	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}
}

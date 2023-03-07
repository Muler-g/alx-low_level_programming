#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: input
 * @size: size of matrix
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		int n1 = (size + 1) * i;

		sum1 = sum1 + *(a + n1);
	}
	for (j = 0; j < size; j++)
	{
		int n2 = (size - 1) * j;

		sum2 = sum2 + *(a + n2);
	}
	printf("%d, %d\n", sum1, sum2);
}


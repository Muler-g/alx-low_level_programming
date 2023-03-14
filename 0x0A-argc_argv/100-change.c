#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coinsto make change for an amount of money
 * @argc: argument count
 * @argv: argument variable
 * Return: 1 if wrong number of arguments, 0 if negative number,
 * number of coins otherwise.
 */
int main(int argc, char *argv[])
{
	int n, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		printf("Error\n");
	return (1);

	n = atoi(argv[1]);

	if (n < 0)
		printf("0\n");
	return (0);

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
			n -= coins[i];
		result++;
	}
	printf("%d\n", result);

	return (0);
}

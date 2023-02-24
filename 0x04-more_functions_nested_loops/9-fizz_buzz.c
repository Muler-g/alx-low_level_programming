#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * print FIZZ for multiple of 3 instead of the number
 * print Buzz for mutiples of 5 instead of the number
 * print FizzBuzz for multiples of both 3 and 5 instead of the number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
		       	printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}

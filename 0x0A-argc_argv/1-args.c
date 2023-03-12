#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *@argc: argument count
 *@argv: argument variable
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv != 0)
		printf("%i\n", (argc - 1));
	return (0);
}

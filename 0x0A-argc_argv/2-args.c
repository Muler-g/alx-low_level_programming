#include <stdio.h>

/**
 * main - prints all arguments it receives, one arg per line
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

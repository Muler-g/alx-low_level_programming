#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lca;

	for (lca = 'a'; lca <= 'z'; lca++)
		_putchar(lca);

	_putchar('\n');
}

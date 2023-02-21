#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int num;
	char lca;

	for (num = 0; num <= 9; num++)
	{
		for (lca = 'a'; lca <= 'z'; lca++)
			_putchar(lca);
		_putchar('\n');
	}
}

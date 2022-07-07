#include "main.h"

/**
 * print_digonal - print a diagonal line
 *
 * @n: length
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i == n - 1)
			continue;
		for (j = 0; j < i; j++)
			_putchar(' ');
	}
}

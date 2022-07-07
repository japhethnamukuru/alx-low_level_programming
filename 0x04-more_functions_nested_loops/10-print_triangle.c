#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: 1
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			x = j < (size + 1) - i ? ' ' : '#';
			_putchar(x);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * jack_bauer - print every second of the day in 0:0 format
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int i, j, h1, h2, m1, m2;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			h1 = i / 10 + '0';
			h2 = i % 10 + '0';
			m1 = j / 10 + '0';
			m2 = j % 10 + '0';

			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
		}
	}
}

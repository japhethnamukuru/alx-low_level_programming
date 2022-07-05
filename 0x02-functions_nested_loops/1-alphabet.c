#include "main.h"
#include <stdbool.h>
/**
 * print_alphabet - prints lower case alphabet
 * Decsription: Print alphabet using the print_alphabet
 *
 */

void print_alphabet(void)
{
	int i = 97;
	bool a = true;

	while (a)
	{
		_putchar(i);

		if (i == 122)
		{
			a = false;
		}
		i++;
	}
	_putchar('\n');
}

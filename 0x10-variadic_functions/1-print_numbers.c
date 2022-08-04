#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @seperator: delimeter
 *
 * @n: number of args
 */

void print_numbers(const char *seperator, unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 *
 * @n: interger argument
 *
 * Description: Numbers seperated by commas
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);
	printf("\n");
}

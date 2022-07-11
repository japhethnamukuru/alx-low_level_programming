#include "main.h"

/**
 * swap_int - swaps values of two inter values
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

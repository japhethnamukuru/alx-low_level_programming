#include "main.h"

/**
 * print_last_digit - print that last digit of a number
 *
 * @n: the number in whose last digit will be returned
 *
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}

#include "main.h"

/**
 * is_prime_number - returns a prime number
 *
 * @n:integer to check
 *
 * Return: o or 1
 */

int is_prime_number(int n)
{
	int i = 2;

	if (i == 1)
	{
		return (1);
	}
	return (is_prime(i, n));
}

/**
 * is_prime - check if integr is prime
 *
 * @a: integer to check
 *
 * @b: integer
 *
 * Return: integer
 */

int is_prime(int a, int b)
{
	if (b < 2 || b % a  == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (is_prime(a + 1, b));
}

#include "main.h"

/**
 * _sqrt_recursion - computes squareroot
 *
 * @n: integer
 *
 * Return: sqroot or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}

/**
 * check - check the sqr root
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: integer
 */

int check(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (check(a + 1, b));
}

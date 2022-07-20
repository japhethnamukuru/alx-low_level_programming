#include "main.h"

/**
 * facttorial - compute factorial of  given number
 *
 * @n: integer to compute the factorial
 *
 * Return: factorial number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

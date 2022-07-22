#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for alphabets
 *
 * @c : char type letter
 *
 * Return: Always 0 on success and 1 otherwise.
 *
 */

int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
		return (1);
	else
		return (0);
}

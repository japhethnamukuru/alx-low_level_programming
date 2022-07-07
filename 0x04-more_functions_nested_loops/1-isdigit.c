#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digits
 *
 * @c: returns int type
 *
 * Return: 0 on success and 1 otherwise
 */

int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
		return (1);
	else
		return (0);
}

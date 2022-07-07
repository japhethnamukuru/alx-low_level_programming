#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for upper case alphabets
 *
 * @c: Character to check
 *
 * Return: 0 on success and 1 otherwise
 */

int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
		return (1);
	else
		return (0);
}

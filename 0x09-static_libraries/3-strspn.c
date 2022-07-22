#include "main.h"
#include <string.h>

/**
 * _strspn - get length of prefixed string
 *
 * @s: prefixed string
 *
 * @accept: string to compare to
 *
 * Return: leghth
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}

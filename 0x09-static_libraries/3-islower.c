#include "main.h"
#include <ctype.h>

/**
 * _islower - function returns true (1) for lower case number
 * 
 * @c: char type letter
 *
 * Return: Always 0 on success
 */

int _islower(int c)
{
	int i = islower(c);

	if (i > 10)
		return (1);
	else
		return (0);
}

#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - changes string case from lower to upper
 *
 * @s: source string
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}

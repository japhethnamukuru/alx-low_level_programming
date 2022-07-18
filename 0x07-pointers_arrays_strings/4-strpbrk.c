#include "main.h"
#include <string.h>

/**
 * _strpbrk - checks for a character ina given string
 *
 * @s: string to be checked
 *
 * @accept: the checking character
 *
 * Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *ch = s;

	ch = strpbrk(s, accept);
	s = ch;

	return (s);
}

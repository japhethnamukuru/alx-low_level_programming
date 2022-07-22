#include "main.h"
#include <string.h>

/**
 * _strchr - checks for a character in a string
 *
 * @s: pointer to string containing char
 *
 * @c: the checked character
 *
 * Return: a pointer value
 */

char *_strchr(char *s, char c)
{
	char *p = strchr(s, c);

	s = p;
	return (s);
}

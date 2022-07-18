#include "main.h"
#include <string.h>

/**
 * _strstr - checks for a chracter in a string
 *
 * @haystack: stinr to check
 *
 * @needle: substring
 *
 * Return: pointer to a value or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	haystack = strstr(p, needle);

	return (haystack);
}

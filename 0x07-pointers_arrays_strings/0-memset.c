#include "main.h"

/**
 * _memset - Fills n bytes of memory pointed to with const byte c
 *
 * @s: pointer to the memory areato be filled
 *
 * @b: the character to fill the memory area with
 *
 * @n: the character to fill the memory area with
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;
	unsigned int i;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

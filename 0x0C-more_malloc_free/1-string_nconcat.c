#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 *
 * @str: the string
 *
 * Return: Length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcaat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 * 
 * @n: bytes of s2
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *space;

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;
	space = malloc(sizeof(char) * (n + len1 + 1));

	if (space == NULL)

		return (NULL);
	for (i = 0; i < len1; i++)
		space[i] = s1[i];
	for (j = 0; s2[j] != '\0' &&j != n; j++, i++)
		space[i] = s2[j];
	space[i] = '\0';

	return (space);
}

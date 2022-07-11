#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half a given string
 *
 * *@s: the string to print
 *
 * Return: void
 */

void puts_half(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len = len / 2;

	while (*(s + len) != '\0')
	{
		s++;
	}
	printf("%s", s);

	printf("\n");
}

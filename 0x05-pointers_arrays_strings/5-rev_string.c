#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * *@s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int l = 0;
	char b[500];

	strcpy(b, s);

	while (*(s + l) != '\0')
		i++;
	for (i = 0; i < l; i++)
		*(s + i) = *(b + l - (i + 1));
}

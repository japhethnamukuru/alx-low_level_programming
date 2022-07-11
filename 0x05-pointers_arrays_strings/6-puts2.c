#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character
 *
 * *@s: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}

#include <stdio.h>

/**
 *  main - the program execution start point
 *
 *  Description: arithmetic operator
 *
 *  Return: exit with success e 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

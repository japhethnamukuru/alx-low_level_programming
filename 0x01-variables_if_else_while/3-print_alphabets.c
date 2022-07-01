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
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

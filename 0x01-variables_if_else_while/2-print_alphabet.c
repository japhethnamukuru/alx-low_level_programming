#include <stdio.h>

/**
 * main - program start point
 *
 * Return: exit with success
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}

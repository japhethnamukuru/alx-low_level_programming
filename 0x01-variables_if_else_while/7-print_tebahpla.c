#include <stdio.h>
/**
 * main - program entry
 *
 * Descritption: print alphabets in reverse
 *
 * Return: Exit with success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - program start
 *
 * Descritpion: Print numbers to base 16
 *
 * Return: Exit wit succes
 */
int main(void)
{
	int num;
	char strng;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (strng = 'a'; strng <= 'f'; strng++)
		putchar(strng);
	putchar('\n');
	return (0);
}

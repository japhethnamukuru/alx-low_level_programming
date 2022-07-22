#include <stdio.h>

/**
 * main - prints arguments passed to it
 *
 * @argc: argument count
 *
 * @argv: 1d array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

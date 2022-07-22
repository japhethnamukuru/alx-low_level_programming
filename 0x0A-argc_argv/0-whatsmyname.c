#include <stdio.h>

/**
 * main - prints the name of the executable
 *
 * @argc: returns number of arguments passed to the program
 *
 * @argv: 1D array of strings each of whic is an arg passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

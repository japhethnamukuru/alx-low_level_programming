#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcode of the program
 *
 * @a: address of main function
 *
 * @n: number of bytes to print
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - print opcodes
 *
 * @argc: argumnt count
 *
 * @argv: arg vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

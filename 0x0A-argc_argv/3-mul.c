#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes product of 2 int args
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}

	return (0);
}

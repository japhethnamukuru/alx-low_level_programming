#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes minimum number of coins
 *
 * @argc: program arguments count
 *
 * @argv: program arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, n, s, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);

	if (s < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; coins[i] && s; i++)
		{
			n = s / coins[i];
			change += n;
			s -= n * coins[i];
		}
		printf("%d\n", change);
	}
	return (0);
}

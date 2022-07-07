#include <stdio.h>

/**
 * main - program entry
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
			printf(" ");
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		printf("%d", i);
	}
	printf("\n");
	return (0);
}

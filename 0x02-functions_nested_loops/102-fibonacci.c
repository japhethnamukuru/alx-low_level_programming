#include <stdio.h>

/**
 * main - program entry
 *
 * Description: prints the fibonacci numbers
 *
 * Return: Always 0;
 *
 */

int main(void)
{
	int i = 0;

	long int a = 0;
	long int b = 1;
	long int next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}

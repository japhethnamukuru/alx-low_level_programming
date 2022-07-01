#include <stdio.h>

/**
 * main - execution start point
 *
 * Description: check conditions
 *
 * Return: exit with success
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - program enrty
 * 
 * Description: Print complex number system
 * 
 * Return: Exit with 0
 */
int main(void)
{
	int num, i, j;

	for (num = 0; num < 8; num++)
	{
		for (i = num + 1; i < 9; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				putchar(num + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (num == 7 && i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

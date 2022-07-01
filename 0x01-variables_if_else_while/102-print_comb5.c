#include <stdio.h>
#define false 0
#define true 1

/** 
 * main - program entry
 *
 * Description
 *
 * Return: 0
 */
int main(void)
{
	int num, i, j, k;
	int done = false;

	for (num = 0; num < 10; num++)
	{
		if (done)
			break;
		for (i = 0; i < 10; i++)
		{
			if (done)
				break;
			for (j = num; j < 9; j++)
			{
				if (done)
					break;
				for (j > 0 ? (k = 0) : (k = i + 1); k < 10; k++)
				{
					if (num == j && i == k)
						continue;
					putchar(num + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(k + '0');
					if (num == 9 && i == 8 && j == 9 && k == 9)
					{
						done = true;
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the last digit recieved from stdin
 *
 * Description : program to print the last enterred digit
 *
 * Return: exit with success status
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code here*/

	last = n % 10;

	if (last >= 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}

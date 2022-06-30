#include <stdio.h>

/**
 * main - print sise of basic types
 *
 * Return : Always 0
 */
int main(void)
{

	char c;
	int i;
	long int long_i;
	long long int long_long_i;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_i));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long_long_i));
	printf("Size of a foat: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

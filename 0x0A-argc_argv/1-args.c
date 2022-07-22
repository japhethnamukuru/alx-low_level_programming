#include <stdio.h>

/**
 * main - returns numbers of arguments passed to the program
 *
 * @argc: argument count
 *
 * @argv: 1D string array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

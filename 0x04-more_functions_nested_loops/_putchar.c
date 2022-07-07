#include <unistd.h>

/**
 * _putchar - sents output to stdout filestream
 *
 * @c: the character to print
 *
 * Return: exir with 1 on success status
 *
 * On error, exit with -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

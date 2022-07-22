#include <unistd.h>

/**
 * _putchar - writes to std out
 *
 * @c: the character to print
 *
 * Return: 1 on success and 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

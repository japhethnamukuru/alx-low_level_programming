#include <unistd.h>

/**
 * _putchar write the character c to std out
 * @c: the character to print
 *
 * Return : Success 1;
 * On error -1 is returned and error is set seperately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

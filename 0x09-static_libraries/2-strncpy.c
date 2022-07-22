#include "main.h"
#include <string.h>

/**
 * _strncpy - copies string from src to dest
 *
 * @dest: stores string copy
 *
 * @src: source string
 *
 * @n: max number of characters
 *
 * Return: copied string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (dest[n])
		n++;
	strcpy(dest, src);

	return (dest);
}

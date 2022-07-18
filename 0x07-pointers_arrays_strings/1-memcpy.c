#include "main.h"

/**
 * _memcpy - Fills n bytes of memory area pointed to by a constant byte
 *
 * @dest: pointer that copies memory area
 *
 * @src: pointer to copyr from
 *
 * @n: number of byte to copy
 *
 * Return: pointer to copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

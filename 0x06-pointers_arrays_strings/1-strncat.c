#include "main.h"

/**
 * _strncat - joins two strings
 *
 * *@dest: pointer to destination string
 *
 * *@src: poniter to string to append
 *
 * @n: max number of characters
 *
 * Return: concatinted string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}
	return (dest);
}

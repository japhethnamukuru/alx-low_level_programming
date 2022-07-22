#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy a string
 *
 * *@dest: final location
 *
 * *@src: source location
 *
 * Return: final location
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}

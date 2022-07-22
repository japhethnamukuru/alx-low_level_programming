#include "main.h"
#include <string.h>
/**
 * _strcat - concatinates two strings
 *
 * *@dest: pointer to string to concatinate
 *
 * *@src: pointer to char
 *
 * Return: Concatinatedstring
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}

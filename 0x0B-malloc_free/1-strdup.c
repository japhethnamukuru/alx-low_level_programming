#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates an array through malloc
 *
 * @str: array string to duplicate
 *
 * Return: duplcated array
 */

char *_strdup(char *str)
{
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	cpy = strdup(str);

	if (cpy == NULL)
	{
		return (NULL);
	}

	return (cpy);
}

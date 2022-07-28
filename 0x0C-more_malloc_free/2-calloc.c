#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memomy dynamically using malloc
 *
 * @nmemb: array elements
 *
 * @size: array size in bytes
 *
 * Return: poiner to the alocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

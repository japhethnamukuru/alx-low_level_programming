#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array
 *
 * @array: int array
 *
 * @size: array size
 *
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

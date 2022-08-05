#include "function_pointers.h"

/**
 * int_index - search for int
 *
 * @array: int
 * @size: int
 * @cmp: funct
 * Return: index of int searched
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
		return (-1);

	if (size && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);

			if (x != 0)
				return (i);
		}
	}
	return (-1);
}

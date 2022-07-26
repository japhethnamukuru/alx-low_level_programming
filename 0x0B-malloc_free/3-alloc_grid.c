#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array
 *
 * @width: integer
 *
 * @height: integer
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate program arguments to a string
 *
 * @ac: Argument count
 *
 * @av: Argument vector
 *
 * Return: pointer to new string, fail otherwise
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int j, byte, i, size = ac;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (byte = 0; av[j][byte]; byte++)
		{
			size++;
		}
	}
	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (byte = 0; av[j][byte]; byte++)
			string[i++] = av[j][byte];
		string[i++] = '\n';
	}
	string[size] = '\0';
	return (string);
}

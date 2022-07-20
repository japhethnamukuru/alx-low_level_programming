#include "main.h"

/**
 * _strlen_recursion - returns string length
 *
 * @s: character array
 *
 * Return: string length (integer))
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}

/**
 * check_palindrome - returns 0 if palindrome, -1 otherwise
 *
 * @i: integer
 *
 * @j: integer
 *
 * @s: string
 *
 * Return: string
 */

int check_palindrome(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (check_palindrome(i + 1, j - 1, s));
}

/**
 * is_palindrome - return 1 if palindrome and 0 otherwise
 *
 * @s: string to check
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}

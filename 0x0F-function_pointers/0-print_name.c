#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a string of characters
 *
 * @name: string
 *
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}

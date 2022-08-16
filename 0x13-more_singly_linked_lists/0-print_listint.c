#include "lists.h"

/**
 * print_listint - prints elements and returns number of elements
 *
 * @n: pointer
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;
	
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}

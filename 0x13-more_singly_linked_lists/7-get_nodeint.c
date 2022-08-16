#include "lists.h"

/**
 * get_nodeint_at_index - returns ith node in the list
 *
 * @head: head pointer
 *
 * @index: index of a node
 *
 * Return: node index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head -> next;

	return (head);
}

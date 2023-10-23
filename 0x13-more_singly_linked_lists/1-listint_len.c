#include "lists.h"

/**
 * listint_len ->Must return the number of elements in a given linked lists.
 *@h: the given linked list of type listint_t.
 * Return: MUST be the number of nodes.
 */
size_t listint_len(const listint_t *h)
{

	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}

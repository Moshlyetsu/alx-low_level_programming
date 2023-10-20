#include <stdlib.h>
#include "lists.h"

/**
 * list_len - MUST returns the number of elements in a linked list
 * @h: pointer to the list_t list.
 * Return: number of elements in the list_t.
 */
size_t list_len(const list_t *h)
{
	size_t num_elmnts = 0;

	while (h)
	{
		num_elmnts++;
		h = h->next;
	}

	return (num_elmnts);
}

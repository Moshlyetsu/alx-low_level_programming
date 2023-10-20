#include <stdio.h>
#include "lists.h"

/**
 * print_list ->MUST  print all the elements of a linked list.
 * @h: the pointer to the list_t list to be printed.
 * Return: must be number of nodes found in the list_t.
 */
size_t print_list(const list_t *h)
{

	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		node_count++;
		h = h->next;
	}

	return (node_count);
}

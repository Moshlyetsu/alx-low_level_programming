#include "lists.h"

/**
 * print_listint ->MUST print all the elements in a given linked list.
 * @h: the given linked list of type listint_t to print.
 * Return: MUST be the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	
	size_t nodes_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}

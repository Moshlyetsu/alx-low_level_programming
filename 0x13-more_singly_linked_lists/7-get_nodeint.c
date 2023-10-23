#include "lists.h"

/**
 * get_nodeint_at_index ->MUST return the node at a certain position in a linked list of type listint_t.
 * @head: pointer to the first node in the linked list listint_t.
 * @index: position of the node that must be returned.
 * Return: NULL if the node does not exist or the located node if it exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	for (; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

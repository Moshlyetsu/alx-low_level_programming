#include "lists.h"

/**
 * add_nodeint ->MUST add a new node at the beginning of a given linked list.
 * @head: the pointer to the first node in the linked list of type listint_t .
 * @n: what must be contained in the new node.
 * Return: MUST be a pointer to the new node or else NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));


	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

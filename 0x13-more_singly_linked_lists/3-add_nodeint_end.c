#include "lists.h"

/**
 * add_nodeint_end ->MUST add a new node at the end of a given listint_t list.
 * @head: the pointer to the address of the first element in the listint_t list.
 * @n: the data to be contained in the new node.
 * Return: MUST be a pointer to the new node or else NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *top = *head;

	new_node = malloc(sizeof(listint_t));
	
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (top->next)
		top = top->next;

	top->next = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * reverse_listint -> MUST reverse  a linked list of type listint_t.
 * @head: pointer to the address of the first node in the list_t  list.
 * Return: pointer to the first node in the new reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}

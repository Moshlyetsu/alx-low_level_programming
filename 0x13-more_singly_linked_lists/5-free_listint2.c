#include "lists.h"

/**
 * free_listint2 ->MUST free a linked list of type listint_t.
 * @head: the pointer to the adress of  head of the listint_t list that must be freed up.
 */
void free_listint2(listint_t **head)
{
	listint_t *cntainr;

	if (head == NULL)
		return;

	while (*head)
	{
		cntainr = (*head)->next;
		free(*head);
		*head = cntainr;
	}
	*head = NULL;
}

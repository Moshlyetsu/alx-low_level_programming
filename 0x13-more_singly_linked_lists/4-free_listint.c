#include "lists.h"

/**
 * free_listint ->Must free a linked list of type listint_t.
 * @head: the pointer to the adress of  head of the
 * listint_t list that must be freed up.
 */
void free_listint(listint_t *head)
{
	listint_t *cntainr;

	while (head)
	{
		cntainr = head->next;
		free(head);
		head = cntainr;
	}
}

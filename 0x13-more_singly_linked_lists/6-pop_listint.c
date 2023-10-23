#include "lists.h"

/**
 * pop_listint ->MUST delete the head node of a linked list of tyoe listint_t.
 * @head: pointer to the address  of the head of first element
 * in the linked list of tyoe listint_t.
 * Return: MUST be the data contained in the head nodes,
 * or else 0 if the list has no data.
 */
int pop_listint(listint_t **head)
{
	listint_t *cntainr;
	int ndes_data;

	if (!head || !*head)
		return (0);

	ndes_data = (*head)->n;
	cntainr = (*head)->next;
	*head = cntainr;

	free(*head);

	return (ndes_data);
}

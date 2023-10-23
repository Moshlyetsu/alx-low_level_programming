#include "lists.h"

/**
 * sum_listint ->MUST calculate the sum of all the data in a listint_t list.
 * @head: pointer of the first node in the linked list listint_t.
 * Return: calcuted sum of the data or else 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cntainr = head;

	while (cntainr)
	{
		sum += cntainr->n;
		cntainr = cntainr->next;
	}

	return (sum);
}

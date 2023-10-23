#include "lists.h"

/**
 * insert_nodeint_at_index -> MUST insert a new node in a linked list, at a given position.
 * @head: pointer to the first node in the linked list listint_t.
 * @idx: the position of where the new node is to be added.
 * @n: the data to insert in the new node.
 * Return: address of the new node, or NULL if the function fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *cntainr;
	listint_t *copy = *head;

	cntainr = malloc(sizeof(listint_t));
	if (!cntainr || !head)
		return (NULL);

	cntainr->n = n;
	cntainr->next = NULL;

	if (idx == 0)
	{
		cntainr->next = *head;
		*head = cntainr;
		return (cntainr);
	}

	for (; copy && x < idx; x++)
	{
		if (x == idx - 1)
		{
			cntainr->next = copy->next;
			copy->next = cntainr;
			return (cntainr);
		}
		else
			copy = copy->next;
	}

	return (NULL);
}

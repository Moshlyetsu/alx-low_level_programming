#include "lists.h"

/**
 * free_listint_safe ->MUST free a linked listint_t list safely so.
 * @h: the pointer to the first node founnd in the linked listint_t list.
 * Return: MUST be the number of elements in the freed listint_t list.
 */
size_t free_listint_safe(listint_t **h)
{
	
	listint_t *cntainr;
	size_t freed_elmnts = 0;
	int isfree;
	

	if (!h || !*h)
		return (0);

	while (*h)
	{
		isfree = *h - (*h)->next;
		if (isfree > 0)
		{
			cntainr = (*h)->next;
			free(*h);
			*h = cntainr;
			freed_elmnts++;
		}
		else
		{
			free(*h);
			*h = NULL;
			freed_elmnts++;
			break;
		}
	}
	
	*h = NULL;

	return (freed_elmnts);
}

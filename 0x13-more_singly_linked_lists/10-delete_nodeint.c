#include "lists.h"

/**
 * delete_nodeint_at_index ->MUST delete a node in a linked list
 * at a certain position of a listint_t list.
 * @head: pointer to the address of the first element in the listint_t list.
 * @index: the position of the node to delete.
 * Return: MUST be 1 on -> (Success), or else -1 if program fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int x = 0;
	listint_t *cntainr = NULL;
	listint_t *copy = *head;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	while (x < index - 1)
	{
		if (!copy || !(copy->next))
			return (-1);

		copy = copy->next;
		x++;
	}

	cntainr = copy->next;
	copy->next = cntainr->next;

	free(cntainr);

	return (1);
}

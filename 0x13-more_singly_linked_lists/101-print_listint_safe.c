#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len ->MUST Count the number of unique nodes in
 * a looped listint_t linked list safely so.
 * @head: pointer to the head of the listint_t to be checked.
 * Return: MUST be 0 If the list is not looped ,
 * or else - Must be the number of unique nodes found in the list.
 */
size_t looped_listint_len(const listint_t *head)
{

	const listint_t *nrmal,
	const listint_t *unque;
	size_t unq_nodes = 1;


	if (head == NULL || head->next == NULL)
		return (0);

	nrmal = head->next;
	unque = (head->next)->next;

	while (unque)
	{
		if (nrmal == unque)
		{
			nrmal = head;
			while (nrmal != unque)
			{
				unq_nodes++;
				nrmal = nrmal->next;
				unque = unque->next;
			}

			nrmal = nrmal->next;
			while (nrmal != unque)
			{
				unq_nodes++;
				nrmal = nrmal->next;
			}

			return (unq_nodes);
		}

		nrmal = nrmal->next;
		unque = (unque->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe ->Must Print a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 * Return: Must be the number of unique nodes found in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_count;
	size_t pos = 0;

	nodes_count = looped_listint_len(head);

	if (nodes_count == 0)
	{
		for (; head != NULL; nodes_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (; pos < nodes_count; pos++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes_count);
}

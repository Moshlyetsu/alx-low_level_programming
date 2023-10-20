#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -> MUST add a new node at the end of a linked list provided.
 * @head: the double pointer to the list_t list passed.
 * @str: the string to put in the new node created.
 * Return: MUST be the address of the new element, or else NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_lst = *head;
	unsigned int lngth = 0;

	while (str[lngth])
	lngth++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = lngth;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_lst->next)
	temp_lst = temp_lst->next;

	temp_lst->next = new_node;

	return (new_node);
}

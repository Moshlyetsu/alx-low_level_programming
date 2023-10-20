#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -> MUST  add a new node at the beginning of a linked list provided.
 * @head: the double pointer to the list_t list passed!
 * @str: the new string passed to add in the node.
 * Return: must be the address of the new element or else NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	
	list_t *new_lst;
	unsigned int lngth = 0;

	while (str[lngth])
	lngth++;

	new_lst = malloc(sizeof(list_t));
	if (!new_lst)
	return (NULL);

	new_lst->str = strdup(str);
	new_lst->len = lngth;
	new_lst->next = (*head);
	(*head) = new_lst;

	return (*head);
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_list ->MUST free up a linked list.
 * @head: a list_t list to be freed.
 */
void free_list(list_t *head)
{

 list_t *temp_lst;

 while (head)
 {
 temp_lst = head->next;
 free(head->str);
 free(head);
 head = temp_lst;
 }

}

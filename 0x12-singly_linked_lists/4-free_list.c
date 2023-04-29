#include <stdlib.h>
#include "lists.h"

/**
* free_list - free linked lists in this task
* @head: list_t list to be freed
*
* Description: free linkedd list.h
* return:value
*/
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}

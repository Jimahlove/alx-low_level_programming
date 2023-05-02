#include "lists.h"

/**
* sum_listint - cal the sum of all the data in a listint_t list
* @head:The  first node in the linked lists
* Description : the sum of the data in linerd lists
* description: return value of 'sum_listint
* Return :resulting sum
*
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}

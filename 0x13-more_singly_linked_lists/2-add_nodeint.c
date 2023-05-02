#include "lists.h"

/**
 * add_nodeint - the  beginning of a linked list new nodes are add
 * @head: first node in the list pointer
 * @n: data to insert in that new node
 * Description:new tasks
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

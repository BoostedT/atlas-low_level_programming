#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: The listint_t list.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}

#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: The listint_t list.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}
}

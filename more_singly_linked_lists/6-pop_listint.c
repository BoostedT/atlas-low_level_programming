#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: The listint_t list.
 *
 * Return: The head node's data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
return (0);
temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}

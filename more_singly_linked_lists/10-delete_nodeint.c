#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current = *head, *temp;

if (!*head)
return (-1);
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; i < index - 1; i++)
{
if (!current)
return (-1);
current = current->next;
}
if (!current || !(current->next))
return (-1);
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

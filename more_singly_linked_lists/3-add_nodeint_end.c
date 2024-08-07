#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: The listint_t list.
 * @n: The integer to add to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (last->next)
last = last->next;

last->next = new;

return (new);
}

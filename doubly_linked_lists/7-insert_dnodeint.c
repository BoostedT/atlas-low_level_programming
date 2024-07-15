#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp = *h;
unsigned int i = 0;
if (!h)
    return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
    return (NULL);
new->n = n;
if (!idx)
{
new->prev = NULL;
new->next = temp;
if (temp)
temp->prev = new;
*h = new;
return (new);
}
for (i = 0; i < idx - 1; i++)
{
if (!temp)
{
free(new);
return (NULL);
}
temp = temp->next;
}
new->prev = temp;
new->next = temp->next;
if (temp->next)
temp->next->prev = new;
temp->next = new;
return (new);
}

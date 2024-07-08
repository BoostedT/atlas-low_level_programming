#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}

return (nodes);
}

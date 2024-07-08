#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *current = *head;

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; i++)
{
if (!current)
return (NULL);
current = current->next;
}
if (!current)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}

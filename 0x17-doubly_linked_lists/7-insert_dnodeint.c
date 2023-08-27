#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at a position in a list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to set in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node = NULL;
dlistint_t *temp = *h;
unsigned int count = 0;
if (h == NULL)
return (NULL);
if (idx == 0)
{
return (add_dnodeint(h, n));
}
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}
if (temp == NULL || count != idx - 1)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = temp;
new_node->next = temp->next;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

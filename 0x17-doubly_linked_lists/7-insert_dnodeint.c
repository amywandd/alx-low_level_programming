#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @h: parameter function
 * @idx: parameter function
 * @n: parameter function
 * Return: address of new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *current = *h;
if (*h == NULL)
return (NULL);
while (current != NULL)
{
current = current->next;
count++;
if (idx != count)
continue;
else
{
temp->n = n;
temp->prev = current;
current->next = temp;
}
}
return (temp);
}

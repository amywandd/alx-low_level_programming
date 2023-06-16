#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: parameter function
 * @index: parameter function
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int count = 0;
if (head == NULL)
return (NULL);
while (temp != NULL)
{
temp = temp->next;
count++;
if (count == index)
return (temp);
}
return (NULL);
}

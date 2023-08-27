#include "lists.h"
#include <stdio.h>
/**
 * *get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: parameter fnction
 * @index: parameter function
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *temp = head;
while (temp != NULL)
{
if (count == index)
{
return (temp);
}
else
temp = temp->next;
count++;
}
return (NULL);
}

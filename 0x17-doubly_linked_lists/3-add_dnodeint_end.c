#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: parameter function
 * @n: parameter function
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
temp->prev = NULL;
*head = temp;
}
else
{
dlistint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = temp;
temp->prev = current;
}
return (temp);
}

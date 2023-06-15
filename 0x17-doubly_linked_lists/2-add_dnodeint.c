#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the head of the list
 * @head: parameter function
 * @n: parameter function
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
if (*head == NULL)
{
temp->prev = NULL;
temp->next = NULL;
}
else
{
temp->prev = NULL;
temp->next = *head;
(*head)->prev = temp;
}
*head = temp;
return (temp);
}

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_dnodeint_end - function that adds a node at the end of the list
 * @head: parameter function
 * @n: parameter function
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *temp;
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (*head == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
new_node->next = NULL;
}
return (new_node);
}

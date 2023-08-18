#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_dnodeint - adds a new node at the beinning of the list
 * @head: parameter function
 * @n: paremeter function
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
new_node->n = n;
if ((*head) == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
(*head) = new_node;
}
else
{
new_node->prev = NULL;
new_node->next = (*head);
(*head)->prev = new_node;
(*head) = new_node;
}
return (*head);
}

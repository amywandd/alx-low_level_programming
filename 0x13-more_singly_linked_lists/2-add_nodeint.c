#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - function that adds a new node at the beginning of the list
 * @head: function parameter
 * @n: function parameer
 * Return: address of new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

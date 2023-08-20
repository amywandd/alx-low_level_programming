#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a doubly linked list
 * @head: parameter function
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
while (temp != NULL)
{
dlistint_t *next = temp->next;
free(temp);
temp = next;
}
}

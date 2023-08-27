#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: parameter function
 * @index: parameter function
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *temp = *head;
if (*head == NULL)
return (-1);
while (temp != NULL && count != index)
{
temp = temp->next;
count++;
}
if (temp == NULL)
return (-1);
else if (temp == *head)
{
(*head) = (*head)->next;
(*head)->prev = NULL;
return (1);
}
else if (temp->next == NULL)
{
temp->prev->next = NULL;
free(temp);
return (1);
}
else
{
temp->next->prev = temp->prev;
temp->prev->next = temp->next;
free(temp);
return (1);
}
}

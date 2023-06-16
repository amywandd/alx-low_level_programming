#include "lists.h"
/**
 * sum_dlistint - prints the sum of all data in a list
 * @head: parameter function
 * Return: 0 or sum
 */
int sum_dlistint(dlistint_t *head)
{
int total = 0;
dlistint_t *current = head;
if (head == NULL)
return (0);
else
{
while (current->next != NULL)
{
total += current->n;
current = current->next;
}
}
return (total);
}

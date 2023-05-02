#include "lists.h"
/**
 * sum_listint - function that returns sum of nodes
 * @head: parameter function
 * Return:0 or sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
if (temp == NULL)
{
return (0);
}
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

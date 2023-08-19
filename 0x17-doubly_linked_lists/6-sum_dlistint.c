#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - returns sum of all data in a doubly linked list
 * @head: parameter function
 * Return: (0) or sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

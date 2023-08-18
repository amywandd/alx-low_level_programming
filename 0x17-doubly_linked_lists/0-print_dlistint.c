#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all elements in a doubly linked list
 * @h: parameter function
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
const dlistint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
count++;
temp = temp->next;
}
return (count);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_dlistint - function that prints elements in a node
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
temp = temp->next;
count++;
}
return (count);
}
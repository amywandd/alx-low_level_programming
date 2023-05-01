#include "stdio.h"
#include "lists.h"
/**
 * print_listint - funtion that print elements in a singly list
 * @h: parameter function
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int count;
while (h)
{
count = printf("%d", h->n);
count++;
h = h->next;
}
return (count);
}

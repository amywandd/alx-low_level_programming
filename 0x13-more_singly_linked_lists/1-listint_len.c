#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: parameter function
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}

#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - returns the number of elements in a double linked list
 * @h: parameter function
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *temp = h;
while (temp != NULL)
{
temp = temp->next;
count++;
}
return (count);
}

#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/*
 * dlistint_len - returns the number of elements in a list
 * @h: parameter function
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *temp = h;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}

#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at the specified index
 * @head: parameter function
 * @index: parameter function
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
int count = 0;
while (temp != NULL)
{
if (count == index)


#include "lists.h"
/**
 * *get_nodeint_at_index - gets the nth node
 * @head: parameter function
 * @index: parameter function
 * Return: the nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}

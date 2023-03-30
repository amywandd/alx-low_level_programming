#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: parameter function
 * @n: parameter function
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
int i = n - 1;
while (i >= 0)
{
_putchar(a[i]);
i++;
}
_putchar('\n');
}

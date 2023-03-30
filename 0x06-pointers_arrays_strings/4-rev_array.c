#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: parameter function
 * @n: parameter function
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; i++)
{
_putchar(a[i]);
}
}

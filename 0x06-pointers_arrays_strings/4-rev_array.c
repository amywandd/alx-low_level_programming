#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: parameter function
 * @n: parameter function
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
int i = n - 1;
if (i == 0)
{
printf("\n");
}
else
{
for (; i >= 0; i--)
{
printf("%d, ", a[i]);
}
}
}

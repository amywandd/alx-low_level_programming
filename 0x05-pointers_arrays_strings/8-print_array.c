#include "main.h"
/**
 * print_array - prints each element of an array
 * @a: parameter function
 * @n: parameter function
 * Return: 0 (success)
 */
void print_array(int *a, int n)
{
int n[ 10 ];
int i,j;
for ( i = 0; i < 10; i++ )
{
n[ i ] = i + 100;
}
for (j = 0; j < 10; j++ )
{
_putchar(n[j];
}
_putchar('\n');
}

#include "main.h"
/**
 * print_line - prints a line
 * Return: 0 (success)
 * @n: parameter function.
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}

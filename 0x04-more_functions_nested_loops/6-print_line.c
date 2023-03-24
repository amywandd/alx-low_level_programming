#include "main.h"
/**
 * print_line - prints a line
 * Return: 0 (success)
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i = 0;
for(; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

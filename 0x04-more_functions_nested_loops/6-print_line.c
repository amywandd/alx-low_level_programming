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
for(int i = 0; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}

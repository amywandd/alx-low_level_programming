#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
int c = '0';
while (c <= '9')
{
if (c != '2' && c != '4')
_putchar(c);
c = c + 1;
}
}

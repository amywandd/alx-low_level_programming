#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 (success)
 */
void print_numbers(void)
{
int c = '0';
while (c <= '9')
{
_putchar(c);
c = c + 1;
}
_putchar('\n');
}

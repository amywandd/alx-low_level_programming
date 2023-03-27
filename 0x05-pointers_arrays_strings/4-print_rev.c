#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: parameter function
 * Return: 0 (success)
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
_putchar(i);
}
_putchar('\n');
}

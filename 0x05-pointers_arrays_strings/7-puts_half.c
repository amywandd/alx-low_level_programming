#include "main.h"
#include <string.h>
/**
 * puts_half - prints half a string
 * @str: parameter function
 * Return: 0 (success)
 */
void puts_half(char *str)
{
int i;
int len = strlen(str);
int n = (strlen(str) - 1) / 2;
if (len % 2 != 0)
{
_putchar(n);
}
else
{
for (i = str[n]; i <= len; i++)
{
_putchar(str[i]);
}
}
}

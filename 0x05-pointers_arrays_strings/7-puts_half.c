#include "main.h"
#include <string.h>
/**
 * puts_half - prints half a string
 * @str: parameter function
 * Return: 0 (success)
 */
void puts_half(char *str)
{
int n;
int len = strlen(str);
if (len % 2 != 0)
{
n = (len - 1) / 2;
}
else
{
for (n = len / 2; n < len; n++)
{
}
}
_putchar('\n');
}

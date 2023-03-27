#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of an array followed by a new line.
 * @str: function parameter
 * Return: 0 9success)
 */
void puts2(char *str)
{
int i;
int len = strlen(str) - 1;
for (i = 0; i <= len; i += 1)
{
_putchar(str[i]);
}
_putchar('\n');
}

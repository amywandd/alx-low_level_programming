#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 10 times
 * return; 0 (success)
 */
void more_numbers(void)
{
int t = 0;
for (; t <= 9; t++)
{
for (c = 0; c <= 14; c++)
{
if (t > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}

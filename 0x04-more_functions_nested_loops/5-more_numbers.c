#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 10 times
 * return; 0 (success)
 */
void more_numbers(void)
{
int t = 0;
int c = '0';
int d = "14";
for (; t <= 10; t++)
{
for (; c <= d; c++)
{
_putchar(c);
}
_putchar(t);
}
_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * return: 0 (success)
 */
void print_alphabet_x10(void)
{
int t = '0';
char c = 'a';
for (; t <= 10; t++)
{
for (; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}

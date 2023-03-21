#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * return: 0 (success)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 10)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
putchar('\n');
i = i + 1;
}
}

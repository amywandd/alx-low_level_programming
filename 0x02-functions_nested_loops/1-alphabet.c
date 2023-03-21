#include "main.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase
 * Return:0 (success)
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
putchar('\n');
}

#include "main.h"
/**
 * main- entry point
 *
 * Return: 0 (success)
 */
int main()
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
putchar('\n');
return (0);
}

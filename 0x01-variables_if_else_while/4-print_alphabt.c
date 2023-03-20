#include <stdio.h>
/*
 *main - entry point
 *Return: 0 (success)
 */
int main(void)
{
char c = 'a';
for (; c <= 'z'; c++)
{
if (c == 'q' || c == 'e')
{
continue;
}
putchar(c);
}
putchar('\n');
return (0);
}

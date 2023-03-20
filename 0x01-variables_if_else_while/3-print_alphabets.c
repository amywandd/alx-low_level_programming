#include <stdio.h>
/*
 *main - entry point
 *Return: 0 (success)
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
while (d <= 'Z')
{
putchar(d);
d = d + 1;
}
putchar('\n');
return (0);
}

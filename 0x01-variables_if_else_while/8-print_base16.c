#include <stdio.h>
/*
 *
 */
int main (void)
{
int n = '0';
char c = 'a';
while ( n <= '9')
{
putchar(n);
n = n + 1;
}
while (c <= 'f')
{
putchar(c);
c = c + 1;
}
putchar ('\n');
return (0);
}

#include <stdio.h>
/*
 * main function-starting point of execution.
 * return - always returns 0.
 */
int main(void)
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

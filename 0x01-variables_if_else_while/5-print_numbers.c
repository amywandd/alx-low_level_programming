#include <stdio.h>
/*
 *main - entry point
 *Return:0 (success)
 */
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n = n + 1;
}
putchar('\n');
return (0);
}

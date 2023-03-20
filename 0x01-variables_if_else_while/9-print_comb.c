#include <stdio.h>
/*
 *
 */
int main(void)
{
int i = '0';
int j = '0';
int k = '0';
for (; i <= '9'; i++)
{
for (; j <= '9'; j++)
{
for (; k <= '9'; k++)
{
putchar(i + 44);
putchar(j + 44);
putchar(k + 44);
}
}
}
putchar('\n');
return (0);
}

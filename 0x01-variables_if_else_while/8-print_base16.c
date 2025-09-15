#include <stdio.h>
/**
 *main - entry point
 *return: value success
 */
int main (void)
{
char n = 'a';
int i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
for (n = 'a'; n < 'g'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}

#include <stdio.h>
/*
 *
 */
int main(void)
{
char c = 'z';
while ( c >= 'a')
{
putchar(c);
c = c + 1;
}
putchar('\n');
return (0);
}

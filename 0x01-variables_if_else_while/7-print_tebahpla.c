#include <stdio.h>
/*
 * main- entry point
 * return: value success
 */
int main(void)
{
char n = 'z';
while (n >= 'a')
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}

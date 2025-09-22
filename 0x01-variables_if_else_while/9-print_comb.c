#include <stdio.h>
/**
 * Main: entry point
 * Return - success value
 */
int main ()
{
int n = 0;
while (n < 10)
{
putchar ('0' + n);
if (n != 9)
{
putchar (',');
putchar (' ');
}
n++;
}
putchar('\n');
return (0);
}

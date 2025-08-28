#include <stdio.h>
/*
 * main - entry point
 * return: value success
 */
int main(void)
{
char n = 'a';
while(n <= 'z')
{
if (n == 'q' || n == 'e')
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return(0);
}

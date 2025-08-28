#include <stdio.h>
/*
 * main - entry point
 * Return: success value
 */
int main(void)
{
char n = 'a';
while ((n >= 'a') && (n <= 'z'))
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}

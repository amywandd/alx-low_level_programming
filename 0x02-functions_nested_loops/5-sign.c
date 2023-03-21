#include "main.h"
/**
 * print_sign - prints the sign of a number
 * c: parameter function
 * Return: 1 if +, -1 if -, o otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar(86);
}
else if (n == 0)
{
return (0);
putchar(48);
}
else if (n < 0)
{
return -1;
putchar(88);
}
return (0);
}

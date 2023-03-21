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
putchar(86);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else if (n < 0)
{
putchar(88);
return (-1);
}
return (0);
}

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
return "+";
}
else if (n == 0)
{
return "0";
}
else if (n < 0)
{
return "-";
}
return (0);
}

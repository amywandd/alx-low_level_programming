#include "main.h"
/**
 * print_last_digit - prints last digit
 * Return: 0 (success)
 */
int print_last_digit(int c)
{
if (c >= '0' && c <= '9')
{
return(c);
}
else
{
c = _abs(c % 10);
return(c);
}
}

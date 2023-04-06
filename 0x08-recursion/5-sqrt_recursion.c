#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter function
 * Return: the natural square root or -1
 */
int _sqrt_recursion(int n)
int result;
result = sqrt(n);
{
if (n < 0)
{
return (-1);
}
else if (result * result == n)
{
return (result);
}
else
{
return (-1);
}
}

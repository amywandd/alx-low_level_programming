#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function that returns value of x raised to y
 * @x: function parameter
 * @y: function parameter
 * Return: value or -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (pow(x, y));
}
}

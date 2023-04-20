#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all numbers
 * @n: function parameter
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int sum = 0;
unsigned int i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}

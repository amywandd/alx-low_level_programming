#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: parameter function
 * @n: parameter function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(arg);
va_start(arg, n);
for (i = 0; i < n; i++)
{
if (separator != NULL && i < n - 1)
{
printf("%d%s", va_arg(arg, int), separator);
}
else
printf("%d", va_arg(arg, int));
}
printf("\n");
}
